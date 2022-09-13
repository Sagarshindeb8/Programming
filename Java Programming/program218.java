//Program to accept file name and write its contents in another file.
//Binary IO - We can copy any file type mp3, video, etc.

import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

class program218
{
    public static void main(String arg[])
    {
        try
		{
			Scanner sobj = new Scanner(System.in);
			
			System.out.println("Please enter the exisiting file name");
			String Filename = sobj.nextLine();
			
			File fobj = new File(Filename);
			
			System.out.println("Please enter the new file name to create");
			String NewFile = sobj.nextLine();
			
			File fobjnew = new File(NewFile);
			boolean bobj1 = fobjnew.createNewFile();
			
			if(fobj.exists())
			{
				FileInputStream fiobj = new FileInputStream(fobj);
				FileOutputStream foobj = new FileOutputStream(fobjnew);
				byte buffer[] = new byte[100];
				int ret = 0;
				
				while((ret = fiobj.read(buffer)) != -1)
				{
					foobj.write(buffer,0,ret);
				}
			}
			else
			{
				System.out.println("There is no such file");
			}
		}
		catch(Exception obj)
		{
			System.out.println(obj);
		}
	}	
}