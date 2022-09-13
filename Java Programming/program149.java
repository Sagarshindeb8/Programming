//Bitwise operators
//Accept a number and check whether the 7th bit in the no is on or not.

import java.lang.*;
import java.util.*;
/*
0100 0000
0100 0000
128 64 32 16 8 4 2 1
*/
class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask = 64;
		int iResult = 0;
		
		iResult = iNo & iMask;
		if(iResult == 0)
		{
			return false;
		}
		else
		{
			return true;
		}		
	}
}

class program149
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number\n");
		int value = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		boolean bRet = bobj.CheckBit(value);
		
		if(bRet == true)
		{
			System.out.println("Bit is on");
		}
		else
		{
			System.out.println("Bit is off");
		}		
	}
}