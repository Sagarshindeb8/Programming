//LB Assignment no:47, Question no:3.
//Write java program which accept string form user and return difference between frequency of small characters,
//And frequency of capital characters.
/*
Input:
"MarvellouS"

Output:
6 (8-2)

*/
import java.lang.*;
import java.util.*;

class StringDemo
{
	public String str;

	public void Accept()
	{
        Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the string : ");
		str = sobj.nextLine();
	}
	
	public void Display()
	{
		System.out.println("The entered string is: "+ str);
	}
	
	public int CountDiff()
	{
		int iCnt1 = 0, iCnt2 = 0;
		char arr[] = str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i] >= 'a') && (arr[i] <= 'z'))
			{
				iCnt1++;
			}
			if((arr[i] >= 'A') && (arr[i] <= 'Z'))
			{
				iCnt2++;
			}
		}
		return (iCnt1-iCnt2);
	}
}

class A47_Q3
{
	public static void main(String args[])
	{
		StringDemo obj = new StringDemo();
		obj.Accept();
		obj.Display();
		int iRet = obj.CountDiff();		
		System.out.println("The difference between frequency of small and capital characters in the string is: "+ iRet);
	}
}


