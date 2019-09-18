----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:11:38 10/16/2014 
-- Design Name: 
-- Module Name:    Seg_EqualsMux - Behavioral 
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

entity Seg_EqualsMux is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           C : in  STD_LOGIC_VECTOR (3 downto 0);
           CLK : in  STD_LOGIC;
           SEG : out  STD_LOGIC_VECTOR (7 downto 0);
           MuxSel : out  STD_LOGIC_VECTOR (3 downto 0));
end Seg_EqualsMux;

architecture Behavioral of Seg_EqualsMux is
SIGNAL equals : STD_LOGIC;
SIGNAL SEG0 : STD_LOGIC_VECTOR (7 downto 0);
SIGNAL SEG1 : STD_LOGIC_VECTOR (7 downto 0);
SIGNAL SEG2 : STD_LOGIC_VECTOR (7 downto 0);
type ESTADOS is (display0, display1, display2, display3);
signal STDO_PRES, STDO_FUT: ESTADOS;
signal CONTADOR: integer;
begin

equals <= '1' when (A=B OR B=C OR A=C) else '0';

SEG0 <= 	"11000000" when (A = "0000" and equals = '0') else  --0
			"11111001" when (A = "0001" and equals = '0') else	--1
			"10100100" when (A = "0010" and equals = '0') else	--2
			"10110000" when (A = "0011" and equals = '0') else	--3
			"10011001" when (A = "0100" and equals = '0') else	--4
			"10010010" when (A = "0101" and equals = '0') else	--5
			"10000010" when (A = "0110" and equals = '0') else	--6
			"11111000" when (A = "0111" and equals = '0') else	--7
			"10000000" when (A = "1000" and equals = '0') else	--8
			"10011000" when (A = "1001" and equals = '0') else	--9
			"10001000" when (A = "1010" and equals = '0') else	--A
			"10000011" when (A = "1011" and equals = '0') else	--b
			"11000110" when (A = "1100" and equals = '0') else	--C
			"10100001" when (A = "1101" and equals = '0') else	--d
			"10000110" when (A = "1110" and equals = '0') else	--E
			"10001110" when (A = "1111" and equals = '0') else	--F
			"10101111";

SEG1 <= 	"11000000" when (B = "0000" and equals = '0') else  --0
			"11111001" when (B = "0001" and equals = '0') else	--1
			"10100100" when (B = "0010" and equals = '0') else	--2
			"10110000" when (B = "0011" and equals = '0') else	--3
			"10011001" when (B = "0100" and equals = '0') else	--4
			"10010010" when (B = "0101" and equals = '0') else	--5
			"10000010" when (B = "0110" and equals = '0') else	--6
			"11111000" when (B = "0111" and equals = '0') else	--7
			"10000000" when (B = "1000" and equals = '0') else	--8
			"10011000" when (B = "1001" and equals = '0') else	--9
			"10001000" when (B = "1010" and equals = '0') else	--A
			"10000011" when (B = "1011" and equals = '0') else	--b
			"11000110" when (B = "1100" and equals = '0') else	--C
			"10100001" when (B = "1101" and equals = '0') else	--d
			"10000110" when (B = "1110" and equals = '0') else	--E
			"10001110" when (B = "1111" and equals = '0') else	--F
			"10101111";

SEG2 <= 	"11000000" when (C = "0000" and equals = '0') else  --0
			"11111001" when (C = "0001" and equals = '0') else	--1
			"10100100" when (C = "0010" and equals = '0') else	--2
			"10110000" when (C = "0011" and equals = '0') else	--3
			"10011001" when (C = "0100" and equals = '0') else	--4
			"10010010" when (C = "0101" and equals = '0') else	--5
			"10000010" when (C = "0110" and equals = '0') else	--6
			"11111000" when (C = "0111" and equals = '0') else	--7
			"10000000" when (C = "1000" and equals = '0') else	--8
			"10011000" when (C = "1001" and equals = '0') else	--9
			"10001000" when (C = "1010" and equals = '0') else	--A
			"10000011" when (C = "1011" and equals = '0') else	--b
			"11000110" when (C = "1100" and equals = '0') else	--C
			"10100001" when (C = "1101" and equals = '0') else	--d
			"10000110" when (C = "1110" and equals = '0') else	--E
			"10001110" when (C = "1111" and equals = '0') else	--F
			"10000110";

Estados_Mux: process(STDO_PRES, SEG0, SEG1, SEG2)
begin
	case STDO_PRES is
	
		when display0 => 
				SEG <= SEG0;
				MuxSel <= "1110";
				STDO_FUT<=display1;
				
		when display1 => 
				SEG <= SEG1;
				MuxSel <= "1101";
				STDO_FUT<=display2;
				
		when display2 => 
				SEG <= SEG2;
				MuxSel <= "1011";
				STDO_FUT<=display3;
				
		when display3 => 
				SEG <= "11111111";
				MuxSel <= "0111";
				STDO_FUT<=display0;
				
	end case;
end process Estados_Mux;

Transicion_Mux: process(CLK, STDO_PRES) begin     --Falta añadir las otras temporizaciones.
	if (CLK'event and CLK='1') then
		if(CONTADOR<1000) then
				CONTADOR<=CONTADOR+1;
		else
				CONTADOR<=0;
				STDO_PRES <= STDO_FUT;
		end if;
	end if;
end process Transicion_Mux;


end Behavioral;

