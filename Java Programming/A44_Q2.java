//LB Assignment no:44, Question no:2.
//Write java program to accept directory name from user and write names of all files from that directory into one newly created file names as "Marvellous.txt".
import java.io.*;

class A44_Q2
{
	public static void main(String args[]) 
	{
		try 
		{		
			//Taking input File name from user
			System.out.println("Enter the directory name to display the content files in it\n");
			BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
			String DirectoryName = inp.readLine(); // for taking a string as an input

			
			//Creating file object for directory
			File fobj = new File(DirectoryName);
			
			//Creating second file
			System.out.println("Enter the file name to cretae new file\n");
			String NewFile = inp.readLine();
			fobj.createNewFile();
		  	System.out.println(NewFile + " New file created successfully");

			

			//Creating a string array to store the list of files from the directory
			String Content[] = fobj.list();
			System.out.println("Writing the file names in " + NewFile + "............");

			for(int i=0;i<Content.length;i++)
			{
				//writing data at the end of the file
				FileWriter fileWritter = new FileWriter(NewFile,true);
				BufferedWriter bw = new BufferedWriter(fileWritter);
				bw.write(Content[i]);
				bw.newLine();
				bw.close();
			}

			//Displaying the updated contents of the file
			//creates a buffer reader input stream  
			BufferedReader br = new BufferedReader(new FileReader(NewFile));
			System.out.println("The file content is: ");
			int r = 0;
			while ((r = br.read()) != -1)
			{
				System.out.print((char) r);
			}
			br.close();		
		}
		  catch(Exception e)
		  {
			e.printStackTrace();
		  }		
	}
}


