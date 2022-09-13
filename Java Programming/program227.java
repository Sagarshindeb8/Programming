//Program to accept string from user and count the no. of words in it.
//Removing extra white spaces.

import java.io.*;
import java.util.*;

class program227
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string: ");
		String str = sobj.nextLine();
		
		String newstr = str.replaceAll("\\s+"," ");//regular expression - regex
		String newstr2 = newstr.trim();
		
		String arr[] = newstr2.split(" ");
		
		System.out.println("Number of words are: "+ arr.length);

	}
}