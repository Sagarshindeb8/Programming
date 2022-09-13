//LB Assignment no:42, Question no:1.
//Write java program to accept name from user and open that file.

import java.io.*;

import java.lang.*;
import java.util.*;

class A42_Q1
{
	public static void main(String args[]) 
	{
		try 
		{		
		  System.out.println("Enter the file name to open\n");
		  BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
		  String FileName = inp.readLine(); // for taking a string as an input
		  //creates a buffer reader input stream  
		  BufferedReader br = new BufferedReader(new FileReader(FileName));

		  System.out.println("File opened successfully");		 
		}
		catch(Exception e) {
		  e.printStackTrace();
		}
	  
	}
}


