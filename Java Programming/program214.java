//Program to accept file name and create a new file.

import java.lang.*;
import java.util.*;
import java.io.*;

class program214
{
    public static void main(String arg[])
    {
        try
		{
			Scanner sobj = new Scanner(System.in);
			
			System.out.println("Please enter file name");
			String Filename = sobj.nextLine();
			
			File fobj = new File(Filename);
			boolean bobj = fobj.createNewFile();
			
			if(bobj == true)
			{
				System.out.println("file is successfully created");
			}
			else
			{
				System.out.println("File is already existing");
			}
		}
		catch(IOException obj)
		{
			System.out.println(obj);
		}
	}	
}