//Matrix accept values and display the smallest element in the matrix (OOP)

import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class MyMatrix extends Matrix
{
	public MyMatrix(int a, int b)
	{
		super(a,b); //sends data to parent class
	}
	public int Minimum()
	{
		int iMin = Arr[0][0];
		for(int i=0;i<iRow;i++)
		{
			for(int j=0;j<iCol;j++)
			{
				if(Arr[i][j] < iMin)
				{
					iMin = Arr[i][j];
				}
			}
		}
		return iMin;
	}
}

class program245
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
		int iRet = mobj.Minimum();
        System.out.println("Minimum element is: "+ iRet);
	}
}