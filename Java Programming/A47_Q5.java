//LB Assignment no:47, Question no:5.
//Write java program which accept string form user and Display the string in reverse order.
/*
Input: "MarvellouS"
Output:"SuollevraM"

Input: "Demo"
Output: "omeD"

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
	
	public void Reverse()
	{
		char arr[] = str.toCharArray();
		int start = 0;
		int	end = (arr.length-1);
		char temp;
		
		for(int i=0;i<arr.length;i++)
		{
			while(start < end)
			{
				temp = arr[start];
				arr[start] = arr[end];
				arr[end] = temp;
				start++;
				end--;
			}
		}
		System.out.println(arr);
	}
}

class A47_Q5
{
	public static void main(String args[])
	{
		StringDemo obj = new StringDemo();
		obj.Accept();
		obj.Display();
		System.out.println("The string in reverse order is: ");
		obj.Reverse();		
	}
}


