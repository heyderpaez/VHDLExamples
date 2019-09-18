----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:42:39 05/19/2011 
-- Design Name: 
-- Module Name:    VHDL_Code - Behavioral 
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
USE IEEE.STD_LOGIC_ARITH.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity VHDL_Code is
PORT (
        sys_clk_pin: IN STD_LOGIC;
        LED0: OUT STD_LOGIC
        );
end VHDL_Code;

architecture Behavioral of VHDL_Code is
    CONSTANT max: INTEGER := 25000000;
    CONSTANT half: INTEGER := max/2;
    SIGNAL count: INTEGER RANGE 0 TO max;
BEGIN
    PROCESS
    BEGIN
        WAIT UNTIL sys_clk_pin'EVENT and sys_clk_pin = '1';
        IF 
            count < max THEN count <= count + 1;
            ELSE count <= 0;
        END IF;
       
        IF 
            count < half THEN LED0 <= '0';
            ELSE LED0 <= '1';
        END IF;
    END PROCESS;
end Behavioral;

