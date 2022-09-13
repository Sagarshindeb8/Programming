//LB Assignment no:45, Question no:5.
//Write java program which accept matrix form user and display addition of elements from each column.
/*
Input:
3 2 5 9
4 3 2 2
8 4 1 9
3 9 7 5

Output:
4 3 2 2
3 2 5 9
3 9 7 5
8 4 1 9

*/

import java.lang.*;
import java.util.*;

class Matrix
{
	public int iRow;
	public int iCol;
	public int Arr[][];
	
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

class A45_Q5
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
		mobj.SwapRow();

        System.out.println("Data after Swapping is: ");
		mobj.Display();
	}
}