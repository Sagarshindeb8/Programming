//Matrix accept values and swap the contents of the row in the matrix (OOP)

import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class MyMatrix extends Matrix
{
	public MyMatrix(int a, int b)
	{
		super(a,b); //sends data to parent class
	}
	public void SwapRow()
	{
		int iTemp = 0;
		for(int i=0;i<iRow-1;i+=2)
		{
			for(int j=0;j<iCol;j++)
			{
				iTemp = Arr[i][j];
				Arr[i][j] = Arr[i+1][j];
				Arr[i+1][j] = iTemp;
			}
		}
	}
}

class program246
{
	public static void main(String arg[])
	{
        Scanner sobj = new Scanner(System.in);
		
        System.out.println("Enter number of rows");
        int x = sobj.nextInt();

        System.out.println("Enter number of columns");
        int y = sobj.nextInt();

		MyMatrix mobj = new MyMatrix(x,y);
		mobj.Accept();
		mobj.Display();
		
		mobj.SwapRow();
        System.out.println("Data after Swapping is: ");
		mobj.Display();
	}
}