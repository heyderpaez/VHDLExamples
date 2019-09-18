----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:34:34 03/30/2012 
-- Design Name: 
-- Module Name:    BCDto7SEG - BCDto7SEGbehavioral 
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

entity BCDto7SEG is
    Port ( BCD : in  STD_LOGIC_VECTOR (3 downto 0);
           SEG : out  STD_LOGIC_VECTOR (6 downto 0);
			  DISPLAY: out STD_LOGIC_VECTOR (3 downto 0));
end BCDto7SEG;

architecture BCDto7SEGbehavioral of BCDto7SEG is
begin
	
	
	DISPLAY <= "1110";

	process (BCD) begin
		case BCD is
			when "0000" => SEG <= "1000000";
			when "0001" => SEG <= "1111001";
			when "0010" => SEG <= "0100100";
			when "0011" => SEG <= "0110000";
			when "0100" => SEG <= "0011001";
			when "0101" => SEG <= "0010010";
			when "0110" => SEG <= "0000010";
			when "0111" => SEG <= "1111000";
			when "1000" => SEG <= "0000000";
			when "1001" => SEG <= "0011000";
			when others => SEG <= "0111111";
		end case;
	end process;

end BCDto7SEGbehavioral;

