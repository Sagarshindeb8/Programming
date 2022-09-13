//LB Assignment no:48, Question no:1.
//Write java program which accept N numbers form user and return difference between summation of even elements and odd elements.
/*
Input: N: 6, Elements: 85 66 3 80 93 88.
Output: 53 (234 - 181).
*/

import java.lang.*;
import java.util.*;

class ArrayDemo
{
	public int iNo;
	public int Arr[];
	
	public ArrayDemo(int a)
	{
		this.iNo = a;
		Arr = new int[iNo];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the numbers:");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		System.out.println("The entered numbers are: ");
		for(int i=0;i<Arr.length;i++)
		{
			System.out.print(Arr[i]+ "\t");
		}
		System.out.println();
	}
	
	public int Difference()
	{
		int iSumEven=0, iSumOdd=0;
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i] % 2) == 0)
			{
				iSumEven = iSumEven + Arr[i];
			}
			if((Arr[i] % 2) != 0)
			{
				iSumOdd = iSumOdd + Arr[i];
			}
		}
		return (iSumEven - iSumOdd);
	}
}

class A48_Q1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		
		System.out.println("Enter the number of elements: ");
		int iValue = sobj.nextInt();
		
		ArrayDemo obj = new ArrayDemo(iValue);
		obj.Accept();
		obj.Display();
		int iRet = obj.Difference();
		System.out.println("The difference between summation of even and odd elements is: " + iRet);
		
	}
}
