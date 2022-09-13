//Program to accept 2 strings from user and check whether it is anagram or not.
//no of letters and frequency of letters are equal.
//eg: listen and silent, rescue and secure, race and care, night and thing
//program316/17.

import java.io.*;
import java.util.*;

class program234
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the first string: ");
		String str1 = sobj.nextLine();
		
		str1 = str1.toLowerCase();
		
		char arr[] = str1.toCharArray();
		int Frequency1[] = new int[26];
				
		System.out.println("Enter the second string: ");
		String str2 = sobj.nextLine();
		
		str2 = str2.toLowerCase();
		
		char brr[] = str2.toCharArray();
		int Frequency2[] = new int[26];
		
		if(str1.length()!= str2.length())
		{
			System.out.println("Strings are not anagram");
			return;
		}
		
		int i=0;
		for(i=0;i<arr.length;i++)
		{
			Frequency1[arr[i]-'a']++;
		}
		
		
		for(i=0;i<brr.length;i++)
		{
			Frequency2[brr[i]-'a']++;
		}
		
		
		for(i=0;i<Frequency1.length;i++)
		{
			if(Frequency1[i]!=Frequency2[i])
			{
				break;
			}
		}
		if(i==26)
		{
			System.out.println("Strings are anagram");
		}
		else
		{
			System.out.println("Strings are not anagram");
		}
	}
}