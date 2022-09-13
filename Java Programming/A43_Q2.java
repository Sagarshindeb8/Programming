//LB Assignment no:43, Question no:2.
//Write java program to accept file name from user and check whether that file is regular file or not.
import java.io.*;
import java.util.*;


class A43_Q2
{
	public static void main(String args[]) 
	{
		try 
		{		
		  //Opening first file
		  System.out.println("Enter the first file name to open\n");
		  BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
		  String InputFileName = inp.readLine();
		  
		  File fobj = new File(InputFileName);
		  if(fobj.isFile())
		  {
			System.out.println(InputFileName + " is a regular file");
		  }
		  else if(fobj.isDirectory())
		  {
			System.out.println(InputFileName + " is a Directory");
		  }
		  else
		  {
			System.out.println("Not a regular file or directory.");
		  }
		}
		  catch(Exception e)
		  {
			e.printStackTrace();
		  }		
	}
}


