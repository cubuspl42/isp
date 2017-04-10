----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:18:54 04/09/2017 
-- Design Name: 
-- Module Name:    source - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;


entity source is
port (
	signal clk_i : in std_logic;
	signal rst_i : in std_logic;

	signal rxd_i : in std_logic;
	signal txd_o : out std_logic := '1';
	
	signal led7_an_o : out std_logic_vector(3 downto 0); 
	signal led7_seg_o : out std_logic_vector(7 downto 0) := "11111111";
	signal ld0 : out std_logic := '0'
);
end source;

architecture Behavioral of source is
	type transmission_state is (
		idle_state,
		start_state,
		listen_state,
		stop_state
	);

	signal current_state : transmission_state;

	signal counter : integer;
	signal segment : integer;
	
	signal digit_i : std_logic_vector(31 downto 0) := (others => '1');
		
	signal tick_counter : integer;
	signal bit_counter : integer;
	signal bit_buffer : std_logic_vector(7 downto 0);


	constant lcd_freq : integer := 50000; -- 50kHz
	constant rxd_freq : integer := 5208; -- 9600bps
	constant rxd_freq_2 : integer := 2604; -- 9600bps/2
	
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
				return "0000001-"; -- 0
			when "0001" =>
				return "1001111-"; -- 1
			when "0010" =>
				return "0010010-"; -- 2
			when "0011" =>
				return "0000110-"; -- 3
			when "0100" =>
				return "1001100-"; -- 4
			when "0101" =>
				return "0100100-"; -- 5
			when "0110" =>
				return "0100000-"; -- 6
			when "0111" =>
				return "0001111-"; -- 7
			when "1000" =>
				return "0000000-"; -- 8
			when "1001" =>
				return "0000100-"; -- 9
			when "1010" =>
				return "0001000-"; -- A
			when "1011" =>
				return "1100000-"; -- B
			when "1100" =>
				return "0110001-"; -- C
			when "1101" =>
				return "1000010-"; -- D
			when "1110" =>
				return "0110000-"; -- E
			when "1111" =>
				return "0111000-"; -- F
			when others =>
				return "00000000";
		end case;
	end hex;
begin
	display: process (clk_i, rst_i)
	begin
		if rst_i='1' then
			counter <= 0;
			segment <= 0;
		elsif clk_i'event and clk_i='1' then
			if counter=lcd_freq then
				case (segment) is
				when 0 =>
					led7_an_o <= "0111";
					led7_seg_o <= digit_i(31 downto 24);
				when 1 =>
					led7_an_o <= "1011";
					led7_seg_o <= digit_i(23 downto 16);
				when 2 =>
					led7_an_o <= "1101";
					led7_seg_o <= digit_i(15 downto 8);
				when others =>
					led7_an_o <= "1110";
					led7_seg_o <= digit_i(7 downto 0);
				end case;
				
				counter <= 0;
				
				if segment = 3 then
					segment <= 0;
				else
					segment <= segment + 1;
				end if;
			else
				counter <= counter + 1;
			end if;
		end if;
	end process;

	monitor: process (clk_i, rst_i)
	begin
		if rst_i='1' then
			current_state <= idle_state;
			tick_counter <= 0;
			bit_counter <= 0;
			digit_i <= (others => '1');
			
			txd_o <= '1';
			ld0 <= '0';
		elsif clk_i'event and clk_i='1' then
			if
				(current_state = idle_state) or
				(current_state = start_state and tick_counter = rxd_freq_2) or
				(current_state = listen_state and tick_counter = rxd_freq) or
				(current_state = stop_state and tick_counter = rxd_freq)
			then
				tick_counter <= 0;

				digit_i(0) <= '1';
				digit_i(8) <= '1';
				digit_i(16) <= '1';
				digit_i(24) <= '1';

				case current_state is
					when idle_state =>
						digit_i(0) <= '0';
						if (rxd_i = '0') then
							current_state <= start_state;
						end if;
					when start_state =>
						digit_i(8) <= '0';
						current_state <= listen_state;
					when listen_state =>
						digit_i(16) <= '0';
						bit_buffer <= rxd_i & bit_buffer(7 downto 1);

						if (bit_counter = 7) then
							current_state <= stop_state;
							bit_counter <= 0;
						else
							bit_counter <= bit_counter + 1;
						end if;
					when stop_state =>
						digit_i(24) <= '0';
						digit_i(7 downto 0) <= hex(bit_buffer(3 downto 0));
						digit_i(15 downto 8) <= hex(bit_buffer(7 downto 4));

						if (rxd_i = '1') then
							current_state <= idle_state;
						end if;
					when others =>
						null;
				end case;
			else
				tick_counter <= tick_counter + 1;
			end if;
		end if;
	end process;
end Behavioral;
