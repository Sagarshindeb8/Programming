//LB Assignment no:47, Question no:4.
//Write java program which accept string form user and check whether it contains vowels in it or not.
/*
Input: "Marvellous"
Output:true

Input: "Demo"
Output: true

Input: "xyz"
Output: false

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
	
	public boolean ChkVowel()
	{
		int flag = 0;
		char arr[] = str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i] == 'a') || (arr[i] == 'e')|| (arr[i] == 'i')|| (arr[i] == 'o')|| (arr[i] == 'u'))
			{
				flag = 1;
				break;
			}
			else
			{
				flag = 0;
			}
		}
		if(flag == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class A47_Q4
{
	public static void main(String args[])
	{
		StringDemo obj = new StringDemo();
		obj.Accept();
		obj.Display();
		boolean bRet = obj.ChkVowel();
		if(bRet == true)
		{	
			System.out.println("The string contains vowels.");
		}
		else
		{
			System.out.println("The string does not contain vowels.");
		}
	}
}


