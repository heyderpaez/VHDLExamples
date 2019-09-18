--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:47:42 10/16/2014
-- Design Name:   
-- Module Name:   E:/SEII/201.7SEG_Equals/Seg_Equals/Test_Bench.vhd
-- Project Name:  Seg_Equals
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Seg_Equals
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
 
ENTITY Test_Bench IS
END Test_Bench;
 
ARCHITECTURE behavior OF Test_Bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Seg_Equals
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         C : IN  std_logic_vector(3 downto 0);
         SEG0 : OUT  std_logic_vector(6 downto 0);
         SEG1 : OUT  std_logic_vector(6 downto 0);
         SEG2 : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
   signal C : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal SEG0 : std_logic_vector(7 downto 0);
   signal SEG1 : std_logic_vector(7 downto 0);
   signal SEG2 : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Seg_Equals PORT MAP (
          A => A,
          B => B,
          C => C,
          SEG0 => SEG0,
          SEG1 => SEG1,
          SEG2 => SEG2
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

--      wait for <clock>_period*10;

      -- insert stimulus here 
		
		A <= "0001";
		B <= "1011";
		C <= "0001";
		wait for 100 ns;
		
		A <= "1001";
		B <= "1111";
		C <= "1001";
		wait for 100 ns;
		
		A <= "0010";
		B <= "0011";
		C <= "0100";
		wait for 100 ns;
		
		A <= "0011";
		B <= "0011";
		C <= "0001";
		wait for 100 ns;
		
		A <= "0100";
		B <= "0011";
		C <= "0001";
		wait for 100 ns;
		
		A <= "0011";
		B <= "1001";
		C <= "1001";
		wait for 100 ns;

      wait;
   end process;

END;
