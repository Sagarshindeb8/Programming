//Matrix accept values and display the elements (OOP)

import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class program243
{
	public static void main(String arg[])
	{
        Scanner sobj = new Scanner(System.in);
		
        System.out.println("Enter number of rows");
        int x = sobj.nextInt();

        System.out.println("Enter number of columns");
        int y = sobj.nextInt();

		Matrix mobj = new Matrix(x,y);
		mobj.Accept();
		mobj.Display();
	}
}