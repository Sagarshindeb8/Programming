//LB Assignment no:43, Question no:3.
//Write java program to accept directory name from user and create that directory.

import java.io.*;
import java.lang.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.*;

class A43_Q3
{
	public static void main(String args[]) 
	{
		try 
		{		
		  BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
		  String FilePath = System.getProperty("user.dir") + "\\";
		  
		  System.out.println("Enter the directory name to create new directory.\n");
		  FilePath = FilePath + inp.readLine();	   

			//Creating a File object
			File file = new File(FilePath);

			//Creating the directory
			boolean bool = file.mkdir();
			if(bool)
			{
				System.out.println("Directory created successfully");
			}else
			{
				System.out.println("Sorry couldn’t create specified directory");
			}
		}
			catch(Exception e) 
			{
				e.printStackTrace();
			}
	} 
	
}


