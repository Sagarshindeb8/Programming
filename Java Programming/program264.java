//String
//Accept string from user and display the no of word which occurs max no of times in the string. (Using hash map)
//Input: Hello world, India Hello.
//output: Hello occurs 2 times.

import java.lang.*;
import java.util.*;

class program264
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the string");
		String str = sobj.nextLine();
		
		String Arr[] = str.split(" "); // as we have to check check for word not char, so string
				
		HashMap<String, Integer> hobj = new HashMap<>();
		
		int Frequency = 0;
		
		for(String ch : Arr)
		{
			if(hobj.containsKey(ch))
			{
				Frequency = hobj.get(ch);
				hobj.put(ch,Frequency+1);
			}
			else
			{
				hobj.put(ch,1);
			}
		}
		
		Set<String>setobj = hobj.keySet();
		int iMax = 0;
		String c = " ";
		for(String value : setobj)
		{
			
			if(hobj.get(value) > iMax)
			{
				iMax = hobj.get(value);
				c = value;
			}
			
		}
		System.out.println(c + " word occurs maximum number of times ie: " + iMax + " times.");
	}
}