//Bitwise operators
//Accept a number and check whether the 3rd bit in the no is on or not.

import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask = 4;
		int iResult = 0;
		
		iResult = iNo & iMask;
		if(Result == 0)
		{
			return false;
		}
		else
		{
			return true;
		}		
	}
}

class program148
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