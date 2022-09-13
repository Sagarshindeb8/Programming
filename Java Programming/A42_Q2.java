//LB Assignment no:42, Question no:2.
//Write java program to accept name from user and open that file and display contents on screen.

import java.io.BufferedReader;
import java.io.*;
import java.lang.*;
import java.util.*;

class A42_Q2
{
	public static void main(String args[]) 
	{
		try 
		{
			System.out.println("Enter the file name to open and display its contents\n");
			BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
			String FileName = inp.readLine(); // for taking a string as an input
			//creates a buffer reader input stream  
			BufferedReader br = new BufferedReader(new FileReader(FileName));
			
			System.out.println("File opened successfully");
			System.out.println("The file content is: ");
			int r = 0;
			while ((r = br.read()) != -1)
			{
				System.out.print((char) r);
			}
		}
		catch(Exception e) {
		  e.printStackTrace();
		}
	  
	}
}


