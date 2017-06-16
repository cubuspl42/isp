----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:44:21 04/12/2017 
-- Design Name: 
-- Module Name:    display - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

---- Uncomment the following library declaration if instantiating
---- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity display is
port (
	signal clk_i : in std_logic;
	signal rst_i : in std_logic;
	signal digit_i : in std_logic_vector(31 downto 0) := (others => '1');

	signal led7_an_o : out std_logic_vector(3 downto 0); 
	signal led7_seg_o : out std_logic_vector(7 downto 0) := "11111111"
);
end display;

architecture Behavioral of display is

	signal counter : integer;
	signal segment : integer;
	
	constant lcd_freq : integer := 50000;
begin
	display: process (clk_i, rst_i)
	begin
		if rst_i='1' then
			counter <= 0;
			segment <= 0;
			led7_an_o <= "1111";
			led7_seg_o <= "11111111";
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
end Behavioral;

