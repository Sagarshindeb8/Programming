//LB Assignment no:43, Question no:1.
//Write java program to accept two file names from user and open first file and create new file (Second name).
//And copy the data from first file into newly created file.

import java.io.*;
import java.util.*;

class A43_Q1
{
	public static void main(String args[]) 
	{
		try 
		{		
		  //Opening first file
		  System.out.println("Enter the first file name to open\n");
		  BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
		  String SourceFile = inp.readLine();
		  System.out.println("File opened successfully");
		  
		  //Creating new second file
		  System.out.println("Enter the second file name to cretae new file\n");
		  String DestinationFile = inp.readLine();
		  File fobj = new File(DestinationFile);
		  fobj.createNewFile();
		  System.out.println(DestinationFile + " New file created successfully");
		  
		  //Copying the contents of source file to destination file
		  BufferedReader br = new BufferedReader(new FileReader(SourceFile));
		  FileWriter fileWritter = new FileWriter(DestinationFile,true);
		  BufferedWriter bw = new BufferedWriter(fileWritter);
		  int c;  
		  while ((c = br.read()) != -1)
		  {  
		   bw.write(c);  
		  }  
		  System.out.println("Copied the data from "+ SourceFile + " to " + DestinationFile + " successfully."); 
		  br.close();
		  bw.close();
		}
		catch(Exception e) {
		  e.printStackTrace();
		}
		
	}
}


