----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:41:20 10/23/2014 
-- Design Name: 
-- Module Name:    edge_detection - Behavioral 
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

entity edge_detection is
    Port ( clk : in  STD_LOGIC;
           signal_in : in  STD_LOGIC;
           output : out  STD_LOGIC);
end edge_detection;

architecture Behavioral of edge_detection is
     signal signal_d:STD_LOGIC;
begin
    process(clk)
    begin
         if clk= '1' and clk'event then
               signal_d<=signal_in;
         end if;
    end process;
    output<= (not signal_d) and signal_in; 
end Behavioral;

