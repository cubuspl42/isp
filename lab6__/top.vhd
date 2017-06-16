library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

entity top is
	port( 
		clk_i : in  STD_LOGIC;
		rst_i : in  STD_LOGIC;
		btn_i : in  STD_LOGIC_VECTOR (3 downto 0);
		led_o : out STD_LOGIC_VECTOR (7 downto 0);
		led7_an_o : out  STD_LOGIC_VECTOR (3 downto 0);
		led7_seg_o : out  STD_LOGIC_VECTOR (7 downto 0)
	);
end top;

architecture Behavioral of top is
	component kcpsm3 is
		port(      
			address : out std_logic_vector(9 downto 0);
			instruction : in std_logic_vector(17 downto 0);
			port_id : out std_logic_vector(7 downto 0);
			write_strobe : out std_logic;
			out_port : out std_logic_vector(7 downto 0);
			read_strobe : out std_logic;
			in_port : in std_logic_vector(7 downto 0);
			interrupt : in std_logic;
			interrupt_ack : out std_logic;
			reset : in std_logic;
			clk : in std_logic
		);
	end component;

	component rom is
		port(      
			address : in std_logic_vector(9 downto 0);
			instruction : out std_logic_vector(17 downto 0);
			clk : in std_logic
		);
	end component;
	 
	component display is
		port(
			clk_i : in STD_LOGIC;
			rst_i : in STD_LOGIC;
			digit_i : in STD_LOGIC_VECTOR (31 downto 0);
			led7_an_o : out STD_LOGIC_VECTOR (3 downto 0);
			led7_seg_o : out STD_LOGIC_VECTOR (7 downto 0)
		);
	end component;
	
	component clk_divider is
		port(
			signal clk_i : in std_logic;
			signal clk_div : out std_logic := '0'
		);
	end component;
	
	type std_logic_vector_4x4 is array (3 downto 0) of std_logic_vector(3 downto 0);
	type std_logic_vector_4x8 is array (3 downto 0) of std_logic_vector(7 downto 0);
	
	constant btn_mode_cycles : integer := 1000;
	constant btn_lock_counter_cycles : integer := 20;
	constant digit_blink_cycles : integer := 500;

	function hex(val: std_logic_vector(3 downto 0)) return std_logic_vector is
	begin

		-- .AAA.
		-- F...B
		-- F...B
		-- .GGG.
		-- E...C
		-- E...C
		-- .DDD.
		--      DP

		case(val) is
			--          ABCDEFG-
			when "0000" =>
				return "00000011"; -- 0
			when "0001" =>
				return "10011111"; -- 1
			when "0010" =>
				return "00100101"; -- 2
			when "0011" =>
				return "00001101"; -- 3
			when "0100" =>
				return "10011001"; -- 4
			when "0101" =>
				return "01001001"; -- 5
			when "0110" =>
				return "01000001"; -- 6
			when "0111" =>
				return "00011111"; -- 7
			when "1000" =>
				return "00000001"; -- 8
			when "1001" =>
				return "00001001"; -- 9
			when "1010" =>
				return "00010001"; -- A
			when "1011" =>
				return "11000001"; -- B
			when "1100" =>
				return "01100011"; -- C
			when "1101" =>
				return "10000101"; -- D
			when "1110" =>
				return "01100001"; -- E
			when "1111" =>
				return "01110001"; -- F
			when others =>
				return "00000000";
		end case;
	end hex;
	
	signal address_wire : std_logic_vector(9 downto 0);
	signal instruction_wire : std_logic_vector(17 downto 0);
	signal clk_1khz : std_logic;

	signal interrupt : std_logic := '0';
	signal interrupt_ack : std_logic;
	signal write_strobe : std_logic;
	signal read_strobe : std_logic;
	signal in_port : std_logic_vector(7 downto 0);
	signal out_port : std_logic_vector(7 downto 0);
	signal port_id : std_logic_vector (7 downto 0);
	signal port_id_int : integer;

	signal digit_i : std_logic_vector(31 downto 0);
	signal digit_segments : std_logic_vector_4x8;
	signal digit_values : std_logic_vector_4x4;
	signal digit_blink_counter : integer := 0;
	signal digit_blink_index : integer := 0;
	
	signal btn_i_old : std_logic_vector(3 downto 0) := "0000";
	signal btn_lock_counter : integer := 0;
	signal btn_mode_counter : integer := -1;
	
	signal edit_mode : std_logic := '0';
begin
	c : clk_divider
		port map (
			clk_i => clk_i,
			clk_div => clk_1khz
		);
		
	d : display
		port map (
			clk_i => clk_i,
			rst_i => rst_i,
			digit_i => digit_i,
			led7_an_o => led7_an_o,
			led7_seg_o => led7_seg_o
		);
		
	k : kcpsm3
		port map (
			address => address_wire,
			instruction => instruction_wire,
			port_id => port_id,
			write_strobe => write_strobe,
			out_port => out_port,
			read_strobe => read_strobe,
			in_port => in_port,
			interrupt => interrupt,
			interrupt_ack => interrupt_ack,
			reset => rst_i,
			clk => clk_1khz
		);
		
	p : rom
		port map (
			address => address_wire,
			instruction => instruction_wire,
			clk => clk_1khz
		);
	
	digit_i(7 downto 0) <= digit_segments(0);
	digit_i(15 downto 8) <= digit_segments(1);
	digit_i(23 downto 16) <= digit_segments(2);
	digit_i(31 downto 24) <= digit_segments(3);
	
	port_id_int <= to_integer(unsigned(port_id));
	
	in_port <=	"0000" & btn_i_old;
	
    led_o(7 downto 1) <= (others => '1');
    led_o(0) <= edit_mode;

	process (clk_1khz, rst_i) is
	begin
		if rst_i = '1' then
			digit_values(0) <= "0000";
			digit_values(1) <= "0000";
			digit_values(2) <= "0000";
			digit_values(3) <= "0000";
			digit_blink_counter <= 0;
			
			btn_lock_counter <= 0;
			btn_mode_counter <= -1;	
			
			edit_mode <= '0';
		elsif rising_edge(clk_1khz) then
			if interrupt = '1' and interrupt_ack = '1' then
				interrupt <= '0';
				led_o(1) <= '1';
				led_o(2) <= '1';
			end if;
			
			if digit_blink_counter < digit_blink_cycles then
				digit_blink_counter <= digit_blink_counter + 1;
			else
				digit_blink_counter <= 0;
			end if;
			
			if btn_lock_counter > 0 then
				btn_lock_counter <= btn_lock_counter - 1;
			end if;
			
			if btn_mode_counter >= 0 then
				btn_mode_counter <= btn_mode_counter + 1;
			end if;
			
			digit_segments(0) <= hex(digit_values(0));
			digit_segments(1) <= hex(digit_values(1));
			digit_segments(2) <= hex(digit_values(2));
			digit_segments(3) <= hex(digit_values(3));
			
			if
				edit_mode = '1' and
				digit_blink_index >= 0 and digit_blink_index < 4 and
				digit_blink_counter < digit_blink_cycles / 2
			then
				digit_segments(digit_blink_index) <= "11111111";
			end if;
			
			if btn_mode_counter >= btn_mode_cycles then
				edit_mode <= not edit_mode;
				btn_mode_counter <= -1;
			end if;
			
			if
				interrupt = '0' and
				btn_lock_counter = 0 and
				btn_i /= btn_i_old
			then
				btn_i_old <= btn_i;
				btn_lock_counter <= btn_lock_counter_cycles;
				
				if btn_i(3) = '1' and btn_i_old(3) = '0' then
					btn_mode_counter <= 0;
				elsif btn_i(3) = '0' and btn_i_old(3) = '1' then
					btn_mode_counter <= -1;
				end if;
				
				if edit_mode = '1' then
					interrupt <= '1';
				end if;
			end if;
			
			if write_strobe = '1' then
				if port_id_int < 4 then
					digit_values(port_id_int) <= out_port(3 downto 0);
				elsif port_id_int = 4 then
					digit_blink_index <= to_integer(signed(out_port));
				end if;
			end if;
		end if;
	end process;
end Behavioral;

