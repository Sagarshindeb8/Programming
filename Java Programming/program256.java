//Bitwise
//Accept no from user and check whether the first nibble is on or off.

import java.lang.*;
import java.util.*;

class program256
{
	public static void main(String arg[])
	{
        Scanner sobj = new Scanner(System.in);
		
        System.out.println("Enter the Number");
        int iNo = sobj.nextInt();
		
		int iMask = 0x0000000f;
		int iResult = 0;
		
		iResult = iNo & iMask;
		
		if(iResult == iMask)
		{
			System.out.println("First nibble is completely on");
		}
		else
		{
			System.out.println("First nibble is off");
		}

	}
}