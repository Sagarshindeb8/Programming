//Bitwise
//Accept no from user and check whether the first and last nibble is on or off.

import java.lang.*;
import java.util.*;

class program257
{
	public static void main(String arg[])
	{
        Scanner sobj = new Scanner(System.in);
		
        System.out.println("Enter the Number");
        long iNo = sobj.nextLong();
		
		long iMask = 0xf000000f;
		long iResult = 0;
		
		iResult = iNo & iMask;
		
		if(iResult == iMask)
		{
			System.out.println("First nibble and last is completely on");
		}
		else
		{
			System.out.println("First and last nibble is off");
		}

	}
}