//Searching - Binary Search.

import java.lang.*;
import java.util.*;

class Array
{
	public int Arr[];
	
	public Array(int iSize)
	{
		Arr = new int[iSize];
	}
	
	protected void finilize()
	{
		Arr = null;
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the elements");
		for(int i=0;i<Arr.length;i++)
		{
			Arr[i] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		System.out.println("Elements from array are: ");
		for(int i=0;i<Arr.length;i++)
		{
			System.out.println(Arr[i]);
		}
	}
}

class Searching extends Array
{
	public Searching(int iSize)
	{
		super(iSize); // Send data to base class.
	}
	
	public int LinearSearch(int iNo)
	{
		int i = 0;
		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i] == iNo)
			{
				break;
			}
		}
		if(i == Arr.length)
		{
			return -1;
		}
		else
		{
			return i;
		}
	}
	
	public int BiDirectionalSearch(int iNo)
	{
		int iStart = 0;
		int iEnd = Arr.length - 1;
		int iPos = -1;
		
		while(iStart <= iEnd)
		{
			if(Arr[iStart] == iNo)
			{
				iPos = iStart;
				break;
			}
			if(Arr[iEnd] == iNo)
			{
				iPos = iEnd;
				break;
			}
			iStart++;
			iEnd--;
		}
		return iPos;
	}
	
	int BinarySearch(int iNo) // Input Array should be sorted.
	{
		int iStart = 0;
		int iEnd = Arr.length - 1;
		int iMiddle = 0;
		int iPos = -1;
		
		while(iStart <= iEnd)
		{
			iMiddle = (iStart + iEnd) / 2;
			
			if(Arr[iMiddle] == iNo)
			{
				break;
			}
			if(Arr[iStart] == iNo)
			{
				iPos = iSart;
				break;
			}
			if(Arr[iEnd] == iNo)
			{
				iPos = iEnd;
				break;
			}
			if(iNo > Arr[iMiddle])
			{
				iStart = iMiddle + 1;
			}
			if(iNo < Arr[iMiddle])
			{
				iEnd = iMiddle - 1;
			}
		}
		if(Arr[iMiddle] == iNo)
        {
            return iMiddle;
        }
        else
        {
            return -1;
        }
	}
}

class program268
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array: ");
		int size = sobj.nextInt();
		
		Searching aobj = new Searching(size);
		aobj.Accept();
		aobj.Display();
		
		System.out.println("Enter the element that you want to search: ");
		int iValue = sobj.nextInt();
		
		int iRet = aobj.BiDirectionalSearch(iValue);
		if(iRet == -1)
		{
			System.out.println("There is no such element");
		}
		else
		{
			System.out.println("Element is present in the array at index: "+ iRet);
		}
	}
}