//Bitwise operators (using Hexadecimal num sys)
//Accept a number and check whether the 14th bit in the no is on or not.

import java.lang.*;
import java.util.*;
// 0000 0000 0000 0000 0010 0000 0000 0000
//	0	  0	   0	0	2	  0   0     0	-> 0X00002000
class Bitwise
{
	public boolean CheckBit(int iNo)
	{    
		int iMask = 0X00002000;
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

class program152
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