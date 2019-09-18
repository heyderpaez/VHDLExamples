 ----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:25:46 10/16/2014 
-- Design Name: 
-- Module Name:    Seg_Equals - Behavioral 
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

entity Seg_Equals is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           C : in  STD_LOGIC_VECTOR (3 downto 0);
           SEG0 : out  STD_LOGIC_VECTOR (6 downto 0);
           SEG1 : out  STD_LOGIC_VECTOR (6 downto 0);
           SEG2 : out  STD_LOGIC_VECTOR (6 downto 0));
end Seg_Equals;

architecture Behavioral of Seg_Equals is
SIGNAL equals: STD_LOGIC;
begin

equals <= '1' when (A>"1001" OR B>"1001" OR C>"1001") else '0';

SEG0 <= 	"0111111" when (A = "0000" and equals = '0') else  --0
			"0000110" when (A = "0001" and equals = '0') else	--1
			"1011011" when (A = "0010" and equals = '0') else	--2
			"1001111" when (A = "0011" and equals = '0') else	--3
			"1100110" when (A = "0100" and equals = '0') else	--4
			"1101101" when (A = "0101" and equals = '0') else	--5
			"1111101" when (A = "0110" and equals = '0') else	--6
			"0000111" when (A = "0111" and equals = '0') else	--7
			"1111111" when (A = "1000" and equals = '0') else	--8
			"1100111" when (A = "1001" and equals = '0') else	--9
--			"1110111" when (A = "1010" and equals = '0') else	--A
--			"1111100" when (A = "1011" and equals = '0') else	--b
--			"0111001" when (A = "1100" and equals = '0') else	--C
--			"1011110" when (A = "1101" and equals = '0') else	--d
--			"1111001" when (A = "1110" and equals = '0') else	--E
--			"1110001" when (A = "1111" and equals = '0') else	--F
			"1010000";

SEG1 <= 	"0111111" when (B = "0000" and equals = '0') else  --0
			"0000110" when (B = "0001" and equals = '0') else	--1
			"1011011" when (B = "0010" and equals = '0') else	--2
			"1001111" when (B = "0011" and equals = '0') else	--3
			"1100110" when (B = "0100" and equals = '0') else	--4
			"1101101" when (B = "0101" and equals = '0') else	--5
			"1111101" when (B = "0110" and equals = '0') else	--6
			"0000111" when (B = "0111" and equals = '0') else	--7
			"1111111" when (B = "1000" and equals = '0') else	--8
			"1100111" when (B = "1001" and equals = '0') else	--9
--			"1110111" when (B = "1010" and equals = '0') else	--A
--			"1111100" when (B = "1011" and equals = '0') else	--b
--			"0111001" when (B = "1100" and equals = '0') else	--C
--			"1011110" when (B = "1101" and equals = '0') else	--d
--			"1111001" when (B = "1110" and equals = '0') else	--E
--			"1110001" when (B = "1111" and equals = '0') else	--F
			"1010000";

SEG2 <= 	"0111111" when (C = "0000" and equals = '0') else  --0
			"0000110" when (C = "0001" and equals = '0') else	--1
			"1011011" when (C = "0010" and equals = '0') else	--2
			"1001111" when (C = "0011" and equals = '0') else	--3
			"1100110" when (C = "0100" and equals = '0') else	--4
			"1101101" when (C = "0101" and equals = '0') else	--5
			"1111101" when (C = "0110" and equals = '0') else	--6
			"0000111" when (C = "0111" and equals = '0') else	--7
			"1111111" when (C = "1000" and equals = '0') else	--8
			"1100111" when (C = "1001" and equals = '0') else	--9
--			"1110111" when (C = "1010" and equals = '0') else	--A
--			"1111100" when (C = "1011" and equals = '0') else	--b
--			"0111001" when (C = "1100" and equals = '0') else	--C
--			"1011110" when (C = "1101" and equals = '0') else	--d
--			"1111001" when (C = "1110" and equals = '0') else	--E
--			"1110001" when (C = "1111" and equals = '0') else	--F
			"1111001";


end Behavioral;

