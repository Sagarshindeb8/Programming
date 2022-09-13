//Find the Number of Elements in an Array
import java.lang.*;
import java.util.*;

class ArrayX
{
	private int Arr[];

	public ArrayX(int iNo)
	{
		Arr = new int[iNo];
	}
	
	public void Accept()
	{
		int iCnt=0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the array elements: ");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}
	public void Display()
	{
		int iCnt=0;
		System.out.println("The array elements are: ");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.print(Arr[iCnt]+" ");
		}
		System.out.println();
	}
	
    //Function to copy all the elements of one array into another array.
    public void ArrayCopy()
	{
		int iCnt = 0;
		int ArrCopy[] = new int[Arr.length];
		
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			ArrCopy[iCnt] = Arr[iCnt];	
		}
		System.out.println("The original array is: ");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			System.out.print(Arr[iCnt]+" ");	
		}
		System.out.println();
		System.out.println("The new array with copied elements is: ");
			for(iCnt=0;iCnt<ArrCopy.length;iCnt++)
		{
			System.out.print(ArrCopy[iCnt]+" ");	
		}
		System.out.println();
	}
}

class CopyArray
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the no of elements: ");		
		int iLength = sobj.nextInt();
		
		ArrayX obj = new ArrayX(iLength);
		
		obj.Accept();
		obj.Display();
		
		obj.ArrayCopy();
	}
}