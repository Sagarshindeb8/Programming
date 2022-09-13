//OOP in java for Addition of n numbers
//Addition of N numbers by taking user input
//Input: 5
//Output: 1+2+3+4+5 = 15

import java.lang.*;
import java.util.*;

class ArrayX
{
	private int Arr[];
	
	public ArrayX(int iNo)
	{
		Arr = new int[iNo];
	}
	
	public void Accept()
	{
		int iCnt = 0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the array elements: ");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt(); 
		}
	}
	
	public void Display()
	{
		int iCnt = 0;
		
		System.out.println("The array elements are: ");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
	
	public int Summation()
	{
		int iCnt = 0;
		int iSum = 0;
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			iSum = iSum + Arr[iCnt];
		}
		return iSum;
	}
}

class program119
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iLength = 0;
		int iRet = 0;
		
		System.out.println("Enter the value for constuctor");
		iLength = sobj.nextInt();
		
		ArrayX obj = new ArrayX(iLength);
		
		obj.Accept();
		obj.Display();
		
		iRet = obj.Summation();
		System.out.println("Addition is: "+ iRet);
		
		obj = null;
	}
}