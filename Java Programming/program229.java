//Program to accept string from user and display the largest word length in it.

import java.io.*;
import java.util.*;

class program229
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string: ");
		String str = sobj.nextLine();
		
		String newstr = str.replaceAll("\\s+"," ");
		String newstr2 = newstr.trim();
		
		String arr[] = newstr2.split(" ");
		
		int iMax = 0;
		int iPos = 0;
		for(int i=0;i<arr.length;i++)
		{		
			if(arr[i].length() >= iMax);
			{
				iMax = arr[i].length();
				iPos = i;
			}
		}
		System.out.println("Length of largest word is: "+iMax);
		System.out.println("The largest word is: "+arr[iPos]);
	}
}