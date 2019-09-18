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
    Port ( BIN : in  STD_LOGIC_VECTOR (7 downto 0);
           UND : out  STD_LOGIC_VECTOR (3 downto 0);
           DEC : out  STD_LOGIC_VECTOR (3 downto 0);
           CEN : out  STD_LOGIC_VECTOR (3 downto 0));
end BIN8toBCD;

architecture Behavioral of BIN8toBCD is

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
	



end Behavioral;

