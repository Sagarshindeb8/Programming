//LB Assignment no:47, Question no:1.
//Write java program which accept string form user and count number of capital characters.
/*
Input:
"Marvellous Multi OS"

Output:
4

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
	
	public int CountCapital()
	{
		int iCnt = 0;
		char arr[] = str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i] >= 'A') && (arr[i] <= 'Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class A47_Q1
{
	public static void main(String args[])
	{
		StringDemo obj = new StringDemo();
		obj.Accept();
		obj.Display();
		int iRet = obj.CountCapital();		
		System.out.println("The number of capital characters in the string are: "+ iRet);
	}
}


