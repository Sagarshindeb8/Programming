//Program to accept string from user and display the largest word length in it.
//Removing extra white spaces.

import java.io.*;
import java.util.*;

class program228
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string: ");
		String str = sobj.nextLine();
		
		String newstr = str.replaceAll("\\s+"," ");//regular expression - regex
		String newstr2 = newstr.trim();
		
		String arr[] = newstr2.split(" ");
		
		int iMax = 0;
		for(int i=0;i<arr.length;i++)
		{		
			if(arr[i].length() > iMax);
			{
				iMax = arr[i].length();
			}
		}
		System.out.println("Length of largest word is: "+iMax);
	}
}