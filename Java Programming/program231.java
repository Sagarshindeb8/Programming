//Program to accept string from user and reverse the word in place.

import java.io.*;
import java.util.*;

class program231
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string: ");
		String str = sobj.nextLine();
		
		String newstr = str.replaceAll("\\s+"," ");
		String newstr2 = newstr.trim();
		
		String arr[] = newstr2.split(" ");
		
		StringBuffer finalstr = new StringBuffer();
		
		for(int i=0;i<arr.length;i++)
		{
			StringBuffer sb = new StringBuffer(arr[i]);
			finalstr.append((sb.reverse()).append(" "));
		}
		//System.out.println(finalstr);//will give extra whitespace at end.
		String finalstr2 = new String(finalstr);
		System.out.println(finalstr2.trim());//will remove extra whitespace.
	}
}