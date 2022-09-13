//LB Assignment no:48, Question no:2.
//Write java program which accept N numbers form user and display all such elements which are divisible by 5.
/*
Input: N: 6, Elements: 85 66 3 80 93 88.
Output: 85 80.
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
	
	public void DisplayElement()
	{
		System.out.println("The elements which are divisible by 5 are: ");
		for(int i=0;i<Arr.length;i++)
		{
			if((Arr[i] % 5) == 0)
			{
				System.out.println(Arr[i] + "\t");
			}
		}
	}
}

class A48_Q2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);		
		
		System.out.println("Enter the number of elements: ");
		int iValue = sobj.nextInt();
		
		ArrayDemo obj = new ArrayDemo(iValue);
		obj.Accept();
		obj.Display();
		obj.DisplayElement();		
	}
}
