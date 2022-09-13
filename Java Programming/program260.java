//Bitwise
//Accept 2 nos from user and display the position of common bits in both the nos.

import java.lang.*;
import java.util.*;

class program260
{
	public static void main(String arg[])
	{
        Scanner sobj = new Scanner(System.in);
		
        System.out.println("Enter the first number");
        int iNo1 = sobj.nextInt();
		
        System.out.println("Enter the second number");
        int iNo2 = sobj.nextInt();
		
		int iNo = iNo1 & iNo2;
		
		int iMask = 0x00000001; //1
		int iResult = 0;
		int iCnt = 0;
		
		for(int i=1;i<=32;i++)
		{
			iResult = iNo & iMask;
			if(iResult == iMask)
			{
				System.out.println(i);
			}
			iMask = iMask << 1;
		}	
	}
}