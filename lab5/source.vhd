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
	component char_mem
		 port (
		 clka: IN std_logic;
		 addra: IN std_logic_VECTOR(11 downto 0);
		 douta: OUT std_logic_VECTOR(7 downto 0));
	end component;

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
	
	signal addra: std_logic_VECTOR(11 downto 0);
	signal douta: std_logic_VECTOR(7 downto 0);

	signal tx_input_valid : std_logic;
	signal tx_input : std_logic_vector(7 downto 0);
	signal tx_busy : std_logic;

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
	char_rom : char_mem
		port map (
			  clk_i => clka,
			  addra => addra,
			  douta => douta);
			  
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

	receiver: process (clk_i, rst_i)
	begin
		if rst_i='1' then
			current_state <= idle_state;
			tick_counter <= 0;
			bit_counter <= 0;
			digit_i <= (others => '1');
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

						-- PUSH TO FIFO

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

	transmitter: process (clk_i, rst_i)
	begin
		if rst_i='1' then
			tx_state <= idle_state;
			tx_tick_counter <= 0;
			tx_bit_counter <= 0;
			tx_busy <= '0';
			
			txd_o <= '1';
			ld0 <= '0';
		elsif clk_i'event and clk_i='1' then
			if tx_tick_counter = 0 then
				tx_tick_counter <= rxd_freq;

				case tx_state is
					when idle_state =>
						tx_busy <= '0';
						txd_o <= '1';
						if (tx_input_valid = '1') then
							tx_state <= start_state;
						else
							tx_tick_counter <= 0;
						end if;
					when start_state =>
						tx_busy <= '1';
						tx_bit_counter <= 0;
						txd_o <= '0';
						tx_state <= send_state;
					when send_state =>
						txd_o <= tx_input(tx_bit_counter);

						if (tx_bit_counter = 7) then
							tx_state <= stop_state;
						else
							tx_bit_counter <= tx_bit_counter + 1;
						end if;
					when stop_state =>
						txd_o <= '1';
						tx_state <= idle_state
					when others =>
						null;
				end case;
			else
				tx_tick_counter <= tx_tick_counter - 1;
			end if;
		end if;
	end process;

	writer: process (clk_i, rst_i)
	begin
		if rst_i='1' then

		elsif clk_i'event and clk_i='1' then
			tx_input_valid <= '0';

			case wt_state is
				when idle_state =>
					wt_i <= 0;
					wt_j <= 0;
					wt_k <= 0;
					if FIFO_SIZE >= row_max then
						wt_state <= fetching_state
					end if;
				when fetch_char => -- fetch from FIFO ...
					if wt_k < row_max then
						fifo_rd_en <= '1';
					else
						fifo_rd_en <= '0';
					end if;
					if wt_k > 0 then
						wt_row(wt_k - 1) <= fifo_dout;
					end if;
					if wt_k = row_max then
						wt_state = fetch_bmp;
					end if;
				when fetch_bmp =>
					
				when fetch_bmp_row =>
					char_rom_addra <= wt_row(wt_k) & wt_i
					wt_state <= read_bmp_row

				when read_bmp_row =>
					wt_bmp(wt_k)(wt_i) <= char_mem_douta
					
					if(wt_i = 15) then -- it's the last row of the char bitmap
						if wt_k = row_max-1 then -- it's the last char in the row
							wt_state <= print_pixel;
						else -- it's a middle char in the row
							wt_k <= wt_k + 1;
							wt_i <= 0;
						end if;
					else -- it a middle row of the char bitmap
						wt_i <= wt_i + 1;
						wt_state <= fetch_bmp_row;
					end if;

				when print_pixel =>
					if tx_busy = '0' then
						if wt_bmp(wt_k)(wt_i)(wt_j) then -- we'll print a solid char
							if wt_row(wt_k) < 32 then -- it's a special character
								tx_input <= STAR; -- '*'
							else
								tx_input <= wt_row(wt_k);
							end if;
						else -- we'll print whitespace
							tx_input <= SPACE;
						end if;

						tx_input_valid <= '1';

						if wt_j = 7 then -- it's the last column of the char bitmap
							wt_j <= 0;
							if wt_k = row_max - 1 then -- it's the last char in the row
								wt_state <= print_cr;
							else -- it's a middle char
								wt_k <= wt_k + 1;
							end if;
						else -- it's a middle column of the bitmap
							wt_j <= wt_j + 1;
						end if;
					end if;
				when print_cr =>
					if tx_busy = '0' then
						tx_input <= CR;
						tx_input_valid <= '1';
						tx_state <= print_lf;
					end if;
				when print_lf =>
					if tx_busy = '0' then
						tx_input <= LF;
						tx_input_valid <= '1';

						if (wt_i = 15) then
							wt_state <= idle_state;
						else
							wt_i <= wt_i + 1;
							tx_state <= print_pixel;
						end if;
					end if;
				when others =>
					null;
			end case;
		end if;
	end process;
end Behavioral;
