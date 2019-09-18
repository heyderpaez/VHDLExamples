--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:41:16 11/02/2014
-- Design Name:   
-- Module Name:   H:/3. CUC/0. Docencia/1. S. Embebidos II/2. Programas/104.BIN8toBCD/BIN8toBCD/TestBench.vhd
-- Project Name:  BIN8toBCD
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: BIN8toBCD
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
 
ENTITY TestBench IS
END TestBench;
 
ARCHITECTURE behavior OF TestBench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT BIN8toBCD
    PORT(
         BIN : IN  std_logic_vector(7 downto 0);
         UND : OUT  std_logic_vector(3 downto 0);
         DEC : OUT  std_logic_vector(3 downto 0);
         CEN : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal BIN : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal UND : std_logic_vector(3 downto 0);
   signal DEC : std_logic_vector(3 downto 0);
   signal CEN : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
--   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: BIN8toBCD PORT MAP (
          BIN => BIN,
          UND => UND,
          DEC => DEC,
          CEN => CEN
        );

   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      -- insert stimulus here 

		BIN <= "10010011";
		
		wait for 500ns;

      wait;
   end process;

END;
