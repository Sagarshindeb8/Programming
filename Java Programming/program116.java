//OOP
//Input: 4
//Output: 1*2*3*4 = 24 or,
//Output: 4*3*2*1 = 24

import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
		
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number \n");
		this.iNo = sobj.nextInt();
	}
		
	public void Display()
	{
		System.out.println("The number is: "+ this.iNo);
	}
	
	public int Factorial()
	{
		int iFact = 1;
		int iCnt = 0;
			
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			iFact = iFact * iCnt;							
		}
		return iFact;		
	}
}

class program116
{
	public static void main(String arg[])
	{
		Number nobj = new Number();
		int iRet = 0;
		
		nobj.Accept();
		nobj.Display();
		
		iRet = nobj.Factorial();
		System.out.println("The Factorial is: "+ iRet);
	}
}