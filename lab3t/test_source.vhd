--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:31:16 04/07/2017
-- Design Name:   
-- Module Name:   /home/lab155/lab3/test_source.vhd
-- Project Name:  lab3
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
USE ieee.std_logic_unsigned.all;
USE ieee.numeric_std.ALL;
 
ENTITY test_source IS
END test_source;
 
ARCHITECTURE behavior OF test_source IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT source
    PORT(
         clk_i : IN  std_logic;
         rst_i : IN  std_logic;
         led7_an_o : OUT  std_logic_vector(3 downto 0);
         led7_seg_o : OUT  std_logic_vector(7 downto 0);
         btn_i : IN  std_logic_vector(3 downto 0);
         sw_i : IN  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal rst_i : std_logic := '0';
   signal btn_i : std_logic_vector(3 downto 0) := (others => '0');
   signal sw_i : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal led7_an_o : std_logic_vector(3 downto 0);
   signal led7_seg_o : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 0.02us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: source PORT MAP (
          clk_i => clk_i,
          rst_i => rst_i,
          led7_an_o => led7_an_o,
          led7_seg_o => led7_seg_o,
          btn_i => btn_i,
          sw_i => sw_i
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
		rst_i <= '1';
		wait for 10ms;	
		rst_i <= '0';

		wait for clk_i_period*10;

      -- insert stimulus here
		
		sw_i <= "00001011";
		
		wait for 5ms;
		
		btn_i <= "0001";
		
		wait for 5ms;
		
		sw_i <= "00000011";
		
		wait for 5ms;
		
		btn_i <= "0100";
		
		wait for 5ms;
		
		sw_i(4) <= '1';
		
		wait for 5ms;
		
		sw_i <= "00001111";
		
		wait for 5ms;
		
		btn_i <= "0010";
		
		wait for 5ms;
		
		sw_i <= "00001011";
		
		wait for 5ms;
		
		sw_i(6) <= '1';
		
		wait for 5ms;
		
		btn_i <= "1010";
		
		wait for 5ms;
		
		sw_i(5) <= '1';
		
		wait for 5ms;
		
		sw_i(7) <= '1';

		wait;
   end process;

END;
