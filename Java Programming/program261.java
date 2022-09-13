//String
//Accept 2 strings from user and check whether the second string is rotation of the first string.
//Input: str1 - Hello
//Output: str2 - loHel

import java.lang.*;
import java.util.*;

class program261
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter first string");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter the rotated string");
		String str2 = sobj.nextLine();
		
		if(str1.length() != str2.length())	//filter
		{
			System.out.println("Strings are not in rotation");
			return;
		}
		
		String str3 = str1 + str1; // HelloHello
		
		if(str3.contains(str2))
		{
			System.out.println("Strings are in rotation");
		}
		else
		{
			System.out.println("Strings are not in rotation");
		}
		
	}
}