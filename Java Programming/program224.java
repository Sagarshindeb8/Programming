//Program to accept file name and copy the file content along with file name in another new file (with extension .txt).
//Unpacker

import java.lang.*;
import java.util.*;
import java.io.*;

class program224
{
    public static void main(String arg[])
    {
        try
		{
			//Reading header A.txt 10 (FileName size)
			//////////////////////////////////////////
			Scanner sobj = new Scanner(System.in);
			
			System.out.println("Enter the packed file name");
			String PackFileName = sobj.nextLine();
			
			File fobj = new File(PackFileName);
			
			FileInputStream fiobj = new FileInputStream(fobj);
			byte HeaderArray[] = new byte[100];
			
			fiobj.read(HeaderArray,0,100);
			
			String HeaderString = new String(HeaderArray);
			System.out.println(HeaderString);
			////////////////////////////////////////////
			
			//Split the header with name and size separately A.txt	\n	10
			//////////////////////////////////////////////////
			
			String tokens[] = HeaderString.split(" ");
			System.out.println("File name: "+ tokens[0]);
			System.out.println("File size: "+ tokens[1]);
		}
		catch(Exception obj)
		{
			System.out.println(obj);
		}
	}	
}