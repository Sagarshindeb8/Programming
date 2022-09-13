//Program to accept directory name and display the file with extension .txt.

import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

class program220
{
    public static void main(String arg[])
    {
        try
		{
			Scanner sobj = new Scanner(System.in);
			
			System.out.println("Please enter directory / folder name");
			String Foldername = sobj.nextLine();
			
			File dobj = new File(Foldername);
			
			File allfiles[] = dobj.listFiles();
			
			String name;
			
			for(int i=0;i<allfiles.length;i++)
			{
				name = allfiles[i].getName();
				if(name.endsWith(".txt"))		//Input the file extension to display the type of file.
				{
					System.out.println(name);
				}
			}			
		}
		catch(Exception obj)
		{
			System.out.println(obj);
		}
	}	
}