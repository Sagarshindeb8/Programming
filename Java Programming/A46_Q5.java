//LB Assignment no:46, Question no:5.
//Write java program which accept matrix and check whether the matrix is Sparse matrix or not.
//Sparse matrix is a matrix with the majority of its elements equal to zero.
/*
Input:
1 0 3 0
0 6 0 0
0 0 1 0
9 0 0 9

Output:
true

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
	
	boolean ChkSparse()
	{
		int CountZero = 0, CountNonZero = 0;
		for(int i = 0; i < Arr.length; i++)
		{
			for(int j = 0; j <Arr[i].length; j++)
			{
				if(Arr[i][j] == 0)
				{
					CountZero++;
				}
				else if(Arr[i][j] != 0)
				{
					CountNonZero++;
				}
			}
		}
		if (CountZero > CountNonZero)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class A46_Q5
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
		boolean bRet = mobj.ChkSparse();
		if(bRet == true)
		{		
			System.out.println("Given Matrix is Sparse matrix");
		}
		else
		{		
			System.out.println("Given Matrix is not a Sparse matrix");
		}
	}
}


