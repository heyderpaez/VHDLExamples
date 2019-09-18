----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:21:33 11/02/2014 
-- Design Name: 
-- Module Name:    BIN8toBCD - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity BIN8toBCD is
    Port ( clk : in STD_LOGIC;
			  BIN : in  STD_LOGIC_VECTOR (7 downto 0);
           SEGMENTS: out STD_LOGIC_VECTOR(7 downto 0);
			  DISPLAY: out STD_LOGIC_VECTOR (3 downto 0));
end BIN8toBCD;

architecture Behavioral of BIN8toBCD is
	SIGNAL UND, DEC, CEN : STD_LOGIC_VECTOR (3 downto 0);
	SIGNAL SEG0, SEG1, SEG2 : STD_LOGIC_VECTOR(7 downto 0);
	type ESTADOS is (display0, display1, display2, display3);
	signal STDO_PRES, STDO_FUT: ESTADOS;
	signal CONTADOR: integer;
begin

	proceso_bcd: process(BIN)
		variable Z: STD_LOGIC_VECTOR(11 downto 0);
	begin
		Z(2 downto 0) := BIN(7 downto 5);
		
		for i in 4 downto 0 loop
			--Unidades
			if Z(3 downto 0) > 4 then
				Z(3 downto 0) := Z(3 downto 0) + 3;
			end if;
			--Decenas
			if Z(7 downto 4) > 4 then
				Z(7 downto 4) := Z(7 downto 4) + 3;
			end if;
			--Centenas
			if Z(11 downto 8) > 4 then
				Z(11 downto 8) := Z(11 downto 8) + 3;
			end if;
			
			Z(11 downto 1) := Z(10 downto 0);
			Z(0) := BIN(i);
		end loop;
		
		UND <= Z(3 downto 0);
		DEC <= Z(7 downto 4);
		CEN <= Z(11 downto 8);
		
	end process;



	SEG0 <= 	"11000000" when (UND = "0000") else  --0
				"11111001" when (UND = "0001") else	--1
				"10100100" when (UND = "0010") else	--2
				"10110000" when (UND = "0011") else	--3
				"10011001" when (UND = "0100") else	--4
				"10010010" when (UND = "0101") else	--5
				"10000010" when (UND = "0110") else	--6
				"11111000" when (UND = "0111") else	--7
				"10000000" when (UND = "1000") else	--8
				"10011000" when (UND = "1001") else	--9
				"10101111";

	SEG1 <= 	"11000000" when (DEC = "0000") else  --0
				"11111001" when (DEC = "0001") else	--1
				"10100100" when (DEC = "0010") else	--2
				"10110000" when (DEC = "0011") else	--3
				"10011001" when (DEC = "0100") else	--4
				"10010010" when (DEC = "0101") else	--5
				"10000010" when (DEC = "0110") else	--6
				"11111000" when (DEC = "0111") else	--7
				"10000000" when (DEC = "1000") else	--8
				"10011000" when (DEC = "1001") else	--9
				"10101111";
				
	SEG2 <= 	"11000000" when (CEN = "0000") else  --0
				"11111001" when (CEN = "0001") else	--1
				"10100100" when (CEN = "0010") else	--2
				"10110000" when (CEN = "0011") else	--3
				"10011001" when (CEN = "0100") else	--4
				"10010010" when (CEN = "0101") else	--5
				"10000010" when (CEN = "0110") else	--6
				"11111000" when (CEN = "0111") else	--7
				"10000000" when (CEN = "1000") else	--8
				"10011000" when (CEN = "1001") else	--9
				"10101111";
	

	Estados_Mux: process(STDO_PRES, SEG0, SEG1, SEG2)
	begin
		case STDO_PRES is
		
			when display0 => 
					SEGMENTS <= SEG0;
					DISPLAY <= "1110";
					STDO_FUT<=display1;
					
			when display1 => 
					SEGMENTS <= SEG1;
					DISPLAY <= "1101";
					STDO_FUT<=display2;
					
			when display2 => 
					SEGMENTS <= SEG2;
					DISPLAY <= "1011";
					STDO_FUT<=display3;
					
			when display3 => 
					SEGMENTS <= "11111111";
					DISPLAY <= "0111";
					STDO_FUT<=display0;
					
		end case;
	end process Estados_Mux;

	Transicion_Mux: process(CLK, STDO_PRES) begin     --Falta añadir las otras temporizaciones.
		if (CLK'event and CLK='1') then
			if(CONTADOR<50000000) then
					CONTADOR<=CONTADOR+1;
			else
					CONTADOR<=0;
					STDO_PRES <= STDO_FUT;
			end if;
		end if;
	end process Transicion_Mux;

end Behavioral;

