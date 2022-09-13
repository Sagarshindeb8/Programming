//LB Assignment no:42, Question no:5.
//Write java program to accept directory name from user and display all names of files from that directory.

import java.io.*;

class A42_Q5
{
	public static void main(String args[]) throws IOException
	{
			//Taking input File name from user
			System.out.println("Enter the directory name to display the content files in it\n");
			BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
			String DirectoryName = inp.readLine(); // for taking a string as an input

			//Creating file object for directory
			File DirectoryPath = new File(DirectoryName);

			//Creating a string array to store the list of files from the directory
			String Content[] = DirectoryPath.list();
			System.out.println("List of files and directories in the specified directory:");

			for(int i=0;i<Content.length;i++)
			{
				System.out.println(Content[i]);
			}	  
	}
}




