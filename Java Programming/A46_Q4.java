//LB Assignment no:46, Question no:4.
/*Write java program which accept matrix and check whether the matrix is identity matrix or not.
 Identity matrix is a square matrix with 1's along the diagonal from upper left to lower right.
 And 0's in all other positions.
 If it satisfies the structure as explained before then the matrix is called as identity matrix.

Input:
3 2 5 9
4 3 2 2
8 4 1 9
3 9 7 5

Output:
3 9 7 5
8 4 1 9
4 3 2 2
3 2 5 9

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
	
	boolean ChkIdentity()
	{
		int flag = 0;
		for(int i = 0; i < Arr.length; i++)
		{
			for(int j = 0; j <Arr[i].length; j++)
			{
				if((i == j) && (Arr[i][j] != 1))
				{
					flag = -1;
					break;
				}
				else if((i != j) && (Arr[i][j] != 0))
				{
					flag = -1;
					break;
				}
			}
		}
		if (flag == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class A46_Q4
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
		boolean bRet = mobj.ChkIdentity();
		if(bRet == true)
		{		
			System.out.println("Given Matrix is identity matrix");
		}
		else
		{		
			System.out.println("Given Matrix is not an identity matrix");
		}
	}
}


