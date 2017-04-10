--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:46:10 04/09/2017
-- Design Name:   
-- Module Name:   /home/kuba/isp/lab4/test_source.vhd
-- Project Name:  lab4
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: source
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_source IS
END test_source;
 
ARCHITECTURE behavior OF test_source IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT source
    PORT(
         clk_i : IN  std_logic;
         rst_i : IN  std_logic;
         rxd_i : IN  std_logic;
         led7_an_o : OUT  std_logic_vector(3 downto 0);
         led7_seg_o : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal rst_i : std_logic := '0';
   signal rxd_i : std_logic := '0';

 	--Outputs
   signal led7_an_o : std_logic_vector(3 downto 0);
   signal led7_seg_o : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 20 ns;
   constant rxd_i_period : time := 104.17us; -- 9600bps
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: source PORT MAP (
          clk_i => clk_i,
          rst_i => rst_i,
          rxd_i => rxd_i,
          led7_an_o => led7_an_o,
          led7_seg_o => led7_seg_o
        );

   -- Clock process definitions
   clk_i_process :process
   begin
		clk_i <= '0';
		wait for clk_i_period/2;
		clk_i <= '1';
		wait for clk_i_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin
		rxd_i <= '1';
	
		rst_i <= '1';
      -- hold reset state
      wait for 200 us;	
		rst_i <= '0';

      wait for clk_i_period*10;

      -- insert stimulus here 
		
		rxd_i <= '0'; -- start
		wait for rxd_i_period;
		rxd_i <= '1'; -- d0
		wait for rxd_i_period;
		rxd_i <= '0'; -- d1
		wait for rxd_i_period;
		rxd_i <= '1'; -- d2
		wait for rxd_i_period;
		rxd_i <= '0'; -- d3
		wait for rxd_i_period;
		rxd_i <= '1'; -- d4
		wait for rxd_i_period;
		rxd_i <= '0'; -- d5
		wait for rxd_i_period;
		rxd_i <= '1'; -- d6
		wait for rxd_i_period;
		rxd_i <= '1'; -- d7
		wait for rxd_i_period;
		rxd_i <= '1'; -- stop

      wait;
   end process;

END;
