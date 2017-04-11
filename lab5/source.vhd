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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

use STD.TEXTIO.ALL;

entity source is
port (
	signal clk_i : in std_logic;
	signal rst_i : in std_logic;

	signal rxd_i : in std_logic;
	signal txd_o : out std_logic
	
	--signal led7_an_o : out std_logic_vector(3 downto 0); 
	--signal led7_seg_o : out std_logic_vector(7 downto 0) := "11111111";
	--signal ld0 : out std_logic := '0'
);
end source;

architecture Behavioral of source is
	component char_mem
		port (
			clka: IN std_logic;
			addra: IN std_logic_VECTOR(11 downto 0);
			douta: OUT std_logic_VECTOR(7 downto 0)
		);
	end component;

	component fifo_mem
	 	port (
			clk : in std_logic;
			din : in std_logic_vector(7 downto 0);
			wr_en : in std_logic;
			rd_en : in std_logic;
			dout : out std_logic_vector(7 downto 0);
			full : out std_logic;
			empty : out std_logic
		);
	end component;

	constant lcd_freq : integer := 50000; -- 50kHz
	constant rxd_freq : integer := 5208; -- 9600bps
	constant rxd_freq_2 : integer := 2604; -- 9600bps/2
	constant row_max : integer := 2; -- 2-15

	type row_t is array (row_max-1 downto 0) of std_logic_vector(7 downto 0);

	type transmission_state is (
		idle_state,
		start_state,
		listen_state,
		stop_state
	);

	type tx_state_t is (
		idle_state,
		start_state,
		send_state,
		stop_state
	);

	type writer_state is (
		idle_state,
		fetch_char_a,
		fetch_char_b,
		fetch_bit_row_a,
		fetch_bit_row_b,
		print_bit,
		print_cr,
		print_lf
	);

	signal fifo_din : std_logic_vector(7 downto 0);
	signal fifo_wr_en : std_logic;
	signal fifo_rd_en : std_logic;
	signal fifo_dout : std_logic_vector(7 downto 0);
	signal fifo_full : std_logic;
	signal fifo_empty : std_logic;

	signal fifo_size : integer;

	signal current_state : transmission_state;
		
	signal tick_counter : integer;
	signal bit_counter : integer;
	signal bit_buffer : std_logic_vector(7 downto 0);
	
	signal rom_addra: std_logic_VECTOR(11 downto 0);
	signal rom_douta: std_logic_VECTOR(7 downto 0);

	signal tx_input_valid : std_logic;
	signal tx_input : std_logic_vector(7 downto 0);
	signal tx_busy : std_logic;

	signal tx_state : tx_state_t;
	signal tx_tick_counter : integer;
	signal tx_bit_counter : integer;

	signal wt_state : writer_state;
	signal wt_i : integer;
	signal wt_j : integer;
	signal wt_k : integer;
	signal wt_row : row_t;
	signal wt_sleep : std_logic;
	signal wt_bit_row : std_logic_vector(7 downto 0);

	file f : text;

	function vec4(val: integer) return std_logic_vector is
	begin
		return std_logic_vector(to_unsigned(val, 4));
	end vec4;

	function vec8(val: integer) return std_logic_vector is
	begin
		return std_logic_vector(to_unsigned(val, 8));
	end vec8;
begin
	rom : char_mem
		port map (
			clka => clk_i,
			addra => rom_addra,
			douta => rom_douta
		);

	fifo : fifo_mem
		port map (
			clk => clk_i,
			--rst => rst_i,
			din => fifo_din,
			wr_en => fifo_wr_en,
			rd_en => fifo_rd_en,
			dout => fifo_dout,
			full => fifo_full,
			empty => fifo_empty
		);

	receiver: process (clk_i, rst_i)
	begin
		if rst_i='1' then
			current_state <= idle_state;
			tick_counter <= 0;
			bit_counter <= 0;
			fifo_size <= 0;
			fifo_wr_en <= '0';
		elsif clk_i'event and clk_i='1' then
			fifo_wr_en <= '0';

			if
				(current_state = idle_state) or
				(current_state = start_state and tick_counter = rxd_freq_2) or
				(current_state = listen_state and tick_counter = rxd_freq) or
				(current_state = stop_state and tick_counter = rxd_freq)
			then
				tick_counter <= 0;

				case current_state is
					when idle_state =>
						if (rxd_i = '0') then
							current_state <= start_state;
						end if;
					when start_state =>
						current_state <= listen_state;
					when listen_state =>
						bit_buffer <= rxd_i & bit_buffer(7 downto 1);

						if (bit_counter = 7) then
							current_state <= stop_state;
							bit_counter <= 0;
						else
							bit_counter <= bit_counter + 1;
						end if;
					when stop_state =>
						if (rxd_i = '1') then
							fifo_wr_en <= '1';
							fifo_din <= bit_buffer;
							fifo_size <= fifo_size + 1;

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
			--ld0 <= '0';
		elsif clk_i'event and clk_i='1' then
			if tx_tick_counter = 0 then
				tx_tick_counter <= rxd_freq;

				case tx_state is
					when idle_state =>
						tx_busy <= '0';
						txd_o <= '1';
						tx_tick_counter <= 0;
						
						if (tx_input_valid = '1') then
							tx_busy <= '1';
							tx_state <= start_state;
						end if;
					when start_state =>
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
						tx_state <= idle_state;
					when others =>
						null;
				end case;
			else
				tx_tick_counter <= tx_tick_counter - 1;
			end if;
		end if;
	end process;

	writer: process (clk_i, rst_i)
	    variable s : line;
	begin
		if rst_i='1' then
			wt_i <= 0;
			wt_j <= 0;
			wt_k <= 0;
			wt_state <= idle_state;
			wt_sleep <= '0';
			fifo_rd_en <= '0';
		elsif clk_i'event and clk_i='1' then
			tx_input_valid <= '0';
			fifo_rd_en <= '0';

			if wt_sleep = '1' then
				wt_sleep <= '0';
			else
				case wt_state is
					when idle_state =>
						wt_i <= 0;
						wt_j <= 0;
						wt_k <= 0;

						if fifo_size >= row_max then
							wt_state <= fetch_char_a;

							--pragma synthesis_off
							 file_open(f, "output.txt", write_mode);
							--pragma synthesis_on
						end if;
					when fetch_char_a =>
						fifo_rd_en <= '1';
						wt_sleep <= '1';
						wt_state <= fetch_char_b;
					when fetch_char_b =>
						wt_k <= wt_k + 1;
						wt_row(wt_k) <= fifo_dout;
						wt_state <= fetch_char_a;
							
						if wt_k = row_max-1 then
							wt_k <= 0;
							wt_state <= fetch_bit_row_a;
						end if;
					when fetch_bit_row_a =>
						rom_addra <= wt_row(wt_k) & std_logic_vector(to_unsigned(wt_i, 4));
						wt_sleep <= '1';
						wt_state <= fetch_bit_row_b;
					when fetch_bit_row_b =>
						wt_bit_row <= rom_douta;
						wt_state <= print_bit;
					when print_bit =>
						if tx_busy = '0' and tx_input_valid = '0' then
							if wt_bit_row(7 - wt_j) = '1' then
								tx_input <= wt_row(wt_k);

								--pragma synthesis_off
								write(s, character'val(to_integer(unsigned(wt_row(wt_k)))));
								--pragma synthesis_on
							else
								tx_input <= vec8(32);

								--pragma synthesis_off
								write(s, '.');
								--pragma synthesis_on
							end if;
							--tx_input <= wt_bit_row(wt_j) & "0000000";

							tx_input_valid <= '1';
							wt_j <= wt_j + 1;

							if wt_j = 7 then -- it's the last column of the bit row
								wt_j <= 0;
								if wt_k = row_max - 1 then -- it's the last char in the row
									wt_state <= print_cr;
								else
									wt_k <= wt_k + 1;
									wt_state <= fetch_bit_row_a;
								end if;
							end if;
						end if;
					when print_cr =>
						if tx_busy = '0' and tx_input_valid = '0' then
							tx_input <= vec8(13);
							tx_input_valid <= '1';
							wt_state <= print_lf;
						end if;
					when print_lf =>
						if tx_busy = '0' and tx_input_valid = '0' then
							tx_input <= vec8(10);
							
					      	--pragma synthesis_off
							writeline(f, s);
							--pragma synthesis_on

							tx_input_valid <= '1';

							if (wt_i = 15) then
								wt_state <= idle_state;

								--pragma synthesis_off
								file_close(f);
								--pragma synthesis_on
							else
								wt_i <= wt_i + 1;
								wt_k <= 0;
								wt_state <= fetch_bit_row_a;
							end if;
						end if;
				end case;
			end if;
		end if;
	end process;
end Behavioral;
