//Program to accept directory name and copy the file content along with file name in another new file (with extension .txt).

import java.lang.*;
import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

class program222
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
			
			System.out.println("Please enter the new file name to create");
			String NewFile = sobj.nextLine();
			
			File fobj = new File(NewFile);
			boolean bobj = fobj.createNewFile();
			FileOutputStream writerobj = new FileOutputStream(fobj);
			
			FileInputStream readerobj = null;
			int ret = 0;
			
			byte buffer[] = new byte[100];
			


			
			for(int i=0;i<allfiles.length;i++)
			{
				name = allfiles[i].getName();				
				
				if(name.endsWith(".txt"))
				{
					name = name + " " + (allfiles[i].length());
					System.out.println(name);
					byte namearray[] = name.getBytes();
					writerobj.write(namearray,0,namearray.length);
					
					readerobj = new FileInputStream(allfiles[i]);
					
					while((ret = readerobj.read(buffer)) != -1)
					{
						writerobj.write(buffer,0,ret);
					}
					readerobj.close();
				}
			}			
		}
		catch(Exception obj)
		{
			System.out.println(obj);
		}
	}	
}