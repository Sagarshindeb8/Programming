//Bitwise operators - Bit Manipulation - Static Mask
//Accept a number and toggle the 4th & 7th bit in the no.

import java.lang.*;
import java.util.*;
// 0000 0000 0000 0000 0000 0000 0100 1000
//	 0	  0	   0	0	 0	  0    4    8	-> 0X00000048 
class Bitwise
{
	public int OnBit(int iNo)
	{    
		int iMask = 0X00000048;
		int iResult = 0;
		
		iResult = iNo ^ iMask;
		return iResult;
	}
}

class program156
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