//LB Assignment no:42, Question no:4.
//Write java program to accept name from user and create new file of that name if it is not existing.

import java.io.*;

class A42_Q4
{
	public static void main(String args[]) throws IOException
	{
		try 
		{
			//Taking input File name from user
			System.out.println("Enter the file name to open\n");
			BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
			String FileName = inp.readLine(); // for taking a string as an input

			//Creating file object
			File f1 = new File(FileName);

			//Checking condition if file doesnt exist
			if(!f1.exists()) 
			{
				f1.createNewFile();
				System.out.println(FileName + " New file created successfully");
			}
			else
			{		
            	System.out.println(FileName +  " File already exits");
			}
			
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	  
	}
}




