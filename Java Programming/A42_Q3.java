//LB Assignment no:42, Question no:3.
//Write java program to accept name from user and open that file in write mode and write some data at the end of the file.

import java.io.*;

class A42_Q3
{
	public static void main(String args[]) throws IOException
	{
		try 
		{
			System.out.println("Enter the file name to open\n");
			BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
			String FileName = inp.readLine(); // for taking a string as an input

			System.out.println("File opened successfully");

			//creates a buffer reader input stream  
			BufferedReader br = new BufferedReader(new FileReader(FileName));
			
			System.out.println("Enter the data you want to write in the file\n");
			String Data = inp.readLine();

			//writing data at the end of the file
			FileWriter fileWritter = new FileWriter(FileName,true);
			BufferedWriter bw = new BufferedWriter(fileWritter);
			bw.write(Data);
			bw.close();
			System.out.println("Done");

			// Closing Buffer
            System.out.println("Written successfully");
			
			//Displaying the updated contents of the file
			System.out.println("The file content is: ");
			int r = 0;
			while ((r = br.read()) != -1)
			{
				System.out.print((char) r);
			}
			br.close();
		}
		catch(Exception e) {
		  e.printStackTrace();
		}
	  
	}
}




