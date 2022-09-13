//Program to accept string from user and find the small case letters in it.

import java.io.*;
import java.util.*;

class program225
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string: ");
		String str = sobj.nextLine();
		
		//To traverse the string in java we have to convert the string into char array.
		char arr[] = str.toCharArray();
		
		int iCnt=0;
		for(int i=0;i<arr.length;i++)
		{
			//System.out.println(arr[i]);
			if((arr[i] >= 'a') && (arr[i] <= 'z'))
			{
				iCnt++;
			}
		}
		System.out.println("Number of small case letters are: "+ iCnt);
	}
}