----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:18:54 05/26/2011 
-- Design Name: 
-- Module Name:    Codigo - Behavioral 
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

entity Codigo is
    Port ( sys_clk_pin : in  STD_LOGIC;
           LEDS : out  STD_LOGIC_VECTOR (2 downto 0));
end Codigo;

architecture Behavioral of Codigo is
type ESTADOS is (VERDE, AMARILLO, ROJO, ROJO_AMARILLO);
signal STDO_PRES, STDO_FUT: ESTADOS;
signal CONTADOR: integer;
constant segundo: integer := 50000000;
signal multiplo: integer;
begin
proceso1: process(STDO_PRES) begin
	case STDO_PRES is
	when VERDE => LEDS <= "001";
			STDO_FUT<=AMARILLO;
	when AMARILLO => LEDS <= "010";
			STDO_FUT<=ROJO;
	when ROJO => LEDS <= "100";
			STDO_FUT<=ROJO_AMARILLO;
	when ROJO_AMARILLO => LEDS <="110";
			STDO_FUT<=VERDE;
	end case;
end process proceso1;

proceso2: process(sys_clk_pin, STDO_PRES) begin     --Falta añadir las otras temporizaciones.
	if(STDO_PRES=VERDE) then
		multiplo<=30;
	elsif (STDO_PRES=AMARILLO) then
		multiplo<=3;
	elsif (STDO_PRES=ROJO_AMARILLO) then
		multiplo<=3;
	else
		multiplo<=10;
	end if;
	
	if (sys_clk_pin'event and sys_clk_pin='1') then
		if(CONTADOR<(segundo*multiplo)) then
				CONTADOR<=CONTADOR+1;
		else
				CONTADOR<=0;
				STDO_PRES <= STDO_FUT;
		end if;
	end if;
end process proceso2;

end Behavioral;

