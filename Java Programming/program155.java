//Bitwise operators - Bit Manipulation.
//Accept a number and toggle the 4th bit in the no.

import java.lang.*;
import java.util.*;
// 0000 0000 0000 0000 0000 0000 0000 1000
//	 0	  0	   0	0	 0	  0    0    8	-> 0X00000008 
class Bitwise
{
	public int OnBit(int iNo)
	{    
		int iMask = 0X00000008;
		int iResult = 0;
		
		iResult = iNo ^ iMask;
		return iResult;
	}
}

class program155
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number\n");
		int value = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		int iRet = bobj.OnBit(value);

		System.out.println("Updated number is: "+iRet);		
	}
}