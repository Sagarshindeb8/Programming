//LB Assignment no:43, Question no:4.
//Write java program to accept name from user and calculate checksum of that file and display on screen.

import java.io.*;
import java.security.*;

public class A43_Q4
{
	public static void main(String[] args) throws IOException, NoSuchAlgorithmException
	{

        BufferedReader inp = new BufferedReader (new InputStreamReader(System.in));
		String FilePath = System.getProperty("user.dir") + "\\";
		  
		System.out.println("Enter the file name to calculate checksum.\n");
		FilePath = FilePath + inp.readLine();

		File file = new File("E:\\SoftwareDevelopment\\LB\\Assignment\\AssignmentNo43\\Hello.txt");

		MessageDigest mdigest = MessageDigest.getInstance("MD5");

		String checksum = checksum(mdigest, file);

		System.out.println("The checksum is: " + checksum);
	}

	private static String checksum(MessageDigest digest,File file)throws IOException
	{
		FileInputStream fis = new FileInputStream(file);

		byte[] byteArray = new byte[1024];
		int bytesCount = 0;

		while ((bytesCount = fis.read(byteArray)) != -1)
		{
			digest.update(byteArray, 0, bytesCount);
		};

		fis.close();
		byte[] bytes = digest.digest();

		StringBuilder sb = new StringBuilder();
	
		for (int i = 0; i < bytes.length; i++) 
		{		
			sb.append(Integer.toString((bytes[i] & 0xff) + 0x100, 16).substring(1));
		}

		return sb.toString();
	}
}