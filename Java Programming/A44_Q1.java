//LB Assignment no:44, Question no:1.
//Write java program to accept directory name form user and display all names of files from that directory which are regular files.

import java.io.*;

class A44_Q1
{
	public static void main(String args[]) throws IOException 
	{
		try 
		{
			//Taking input directory name from user
			System.out.println("Enter the directory name to display the content files in it\n");
			BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
			String DirectoryName = inp.readLine();
			//String path = "E:\\SoftwareDevelopment\\LB\\Assignment\\AssignmentNo44\\File1";
			//Creating file object for directory
			File fobj = new File(DirectoryName);

			File arr[] = fobj.listFiles();
			
			System.out.println("List of files in the specified directory:");
			int i = 0;
			while(arr[i].isFile())
			{
				System.out.println(arr[i].getName());
				i++;
			}		 
		}
		catch(Exception e)
		  {
			e.printStackTrace();
		  }

	}
}


