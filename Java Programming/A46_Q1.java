//LB Assignment no:46, Question no:1.
//Write java program which accept matrix form user and display transpose of the matrix.
//The transpose of a given matrix is formed by interchanging the rows and columns of a matrix.
/*
Input:
3 2 5 9
4 3 2 2
8 4 1 9
3 9 7 5

Output:
3 4 8 3
2 3 4 9
5 2 1 7
9 2 5 5

*/
import java.lang.*;
import java.util.*;

class Matrix
{
	public int iRow;
	public int iCol;
	public int Arr[][];
	public int Brr[][];
	
	public Matrix(int a, int b)
	{
		this.iRow = a;
		this.iCol = b;
		
		Arr = new int[iRow][iCol];
	}
	
	public void Accept()
	{
        Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the data : ");
		for(int i = 0; i < Arr.length; i++)
		{
			for(int j = 0; j <Arr[i].length; j++)
			{
				Arr[i][j] = sobj.nextInt();
			}
		}
	}
	
	protected void finalize() 
	{
		Arr = null;
		System.gc();		
	}
	
	public void Display()
	{
		System.out.println("Elements of array are : ");
		for(int i = 0; i < Arr.length; i++)
		{
			for(int j = 0; j <Arr[i].length; j++)
			{
				System.out.print(Arr[i][j]+"  ");
			}
			System.out.println();
		}
	}
	
	void Transpose()
	{
		int i = 0, j = 0;
		int Brr[][] = new int[iRow][iCol];
		for(i = 0; i < iRow; i++)
		{
			for(j = 0; j < iCol; j++)
			{
				Brr[i][j] = Arr[j][i];
				System.out.print(Brr[i][j]+"  ");
			}
			System.out.println();
		}
	}
}

class A46_Q1
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows");
		int iNo1 = sobj.nextInt();

		System.out.println("Enter number of columns");
		int iNo2 = sobj.nextInt();

		Matrix mobj = new Matrix(iNo1,iNo2);
		mobj.Accept();
		mobj.Display();
		System.out.println("The transpose of the matrix is: ");
		mobj.Transpose();
	}
}


