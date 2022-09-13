//LB Assignment no:46, Question no:2.
//Write java program which accept matrix and reverse the contents of each row.
/*
Input:
3 2 5 9
4 3 2 2
8 4 1 9
3 9 7 5

Output:
9 5 2 3
2 2 3 4
9 1 4 8
5 7 9 3

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
	
	protected void finalize() //Similar to Destructor
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
	
	void ReverseRow()
	{
		int i = 0, j = 0, temp = 0;
		for(i = 0; i < iRow; i++)
		{	
			int start = 0, end = iCol-1;
			while(start < end)
			{
				temp = Arr[i][start];
				Arr[i][start] = Arr[i][end];
				Arr[i][end] = temp;
				start++;
				end--;
			}
			
		}
	}
}

class A46_Q2
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
		System.out.println("Matrix with reverse Row contents: ");
		mobj.ReverseRow();
		mobj.Display();
	}
}


