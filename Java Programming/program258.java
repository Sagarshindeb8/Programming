//Bitwise
//Accept no and range from user and check whether the 7th and 10th bit is on or off.

import java.lang.*;
import java.util.*;

class program258
{
	public static void main(String arg[])
	{
        Scanner sobj = new Scanner(System.in);
		
        System.out.println("Enter the Number");
        long iNo = sobj.nextlong();
		
        System.out.println("Enter the starting point");
        int iStart = sobj.nextInt();
		
        System.out.println("Enter the ending point");
        int iEnd = sobj.nextInt();
		
		long iMask1 = 0xffffffff;
		long iMask2 = 0xffffffff;
		long iMask = 0;
		long iResult = 0;
		
		iMask1 = iMask1 << (iStart-1);
		iMask2 = iMask2 >> (32-iEnd);
		
		iMask = iMask1 & iMask2;
		
		iResult = iNo & iMask;		
		if(iResult == iMask)
		{
			System.out.println("Bits are on");
		}
		else
		{
			System.out.println("Bits are off");
		}

	}
}