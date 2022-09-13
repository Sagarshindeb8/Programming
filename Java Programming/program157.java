//Bitwise operators - Using Dynamic Mask
//Accept a number as well as position from user and toggle the bit at that position in the no.

import java.lang.*;
import java.util.*;
// 0000 0000 0000 0000 0000 0000 0000 0001
//	 0	  0	   0	0	 0	  0    0    1 
class Bitwise
{
	public int ToggleBit(int iNo, int iPos)
	{    
		int iMask = 0X00000001;
		int iResult = 0;
		
		iMask = iMask << (iPos-1);
		
		iResult = iNo ^ iMask;
		return iResult;
	}
}

class program157
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number\n");
		int value = sobj.nextInt();
		
		System.out.println("Enter the position at which bit is to be toggled\n");
		int Pos = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		int iRet = bobj.ToggleBit(value,Pos);

		System.out.println("Updated number is: "+iRet);		
	}
}