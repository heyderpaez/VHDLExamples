----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:23:02 11/02/2014 
-- Design Name: 
-- Module Name:    InitialTest - Behavioral 
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

entity InitialTest is
    Port ( button : in  STD_LOGIC;
			  clk : in  STD_LOGIC;
           led : out  STD_LOGIC);
end InitialTest;

architecture Behavioral of InitialTest is

begin

    process(clk)
    begin
         if clk= '1' and clk'event then
               led<=button;
         end if;
    end process;
end Behavioral;

