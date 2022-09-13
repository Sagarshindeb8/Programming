//LB Assignment no:44, Question no:5.
//Write java program to accept directory name from user and write data of all files with its name and size into one newly created file named as "Marvellous.txt".

import java.io.*;

class A44_Q5
{
	public static void main(String args[]) 
	{
		try 
		{		
		    //Taking input directory name from user
			System.out.println("Enter the directory name to copy the contents in new file\n");
			BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
			String DirectoryName = inp.readLine();

			
			//Creating file object for directory
			File fobj = new File(DirectoryName);
			
			//Creating new file
			System.out.println("Enter the file name to cretae new file\n");
			String NewFile = inp.readLine();
			fobj.createNewFile();
		  	System.out.println(NewFile + " New file created successfully");

			// create object of PrintWriter for output file
			PrintWriter pw = new PrintWriter(NewFile);

			//Creating a string array to store the list of all files from the directory
			String fileNames[] = fobj.list();

			 // loop for reading the contents of all the files in the directory
        	for (String fileName : fileNames) 
			{
            	System.out.println("Reading from " + fileName);

				// creating instance of file from Name of the file stored in string Array
            	File f = new File(fobj, fileName);

				// creating object of BufferedReader
				BufferedReader br = new BufferedReader(new FileReader(f));
				pw.println("Contents of file " + fileName);

				// Read from current file
				String line = br.readLine()+" Size: "+ f.length() +" Bytes.";
				while (line != null)
				{
					// write to the output file
					pw.println(line);
					
						for(int i=0;i<fileNames.length;i++)
						{
							//writing data at the end of the file
							FileWriter fileWritter = new FileWriter(NewFile,true);							
							BufferedWriter bw = new BufferedWriter(fileWritter);
							bw.write(fileNames[i]);							
							line = br.readLine();
						}
				}
				pw.flush();
				//pw.close();
				//br.close();
			}
			System.out.println("Reading from all files" +" in directory " + fobj.getName() + " Completed");
			
		}
			catch(Exception e) 
			{
				e.printStackTrace();
			}
	} 
	
}


