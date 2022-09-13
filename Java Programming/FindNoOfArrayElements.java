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
			System.out.println(Arr[iCnt]);
		}
	}
	
	public void CountOfArrayElements()
	{
		int iCnt=0;
		int iDigCnt=0;
		System.out.println("The count of array elements is: ");
		for(iCnt=0;iCnt<Arr.length;iCnt++)
		{
			iDigCnt++;
		}
		System.out.println(iDigCnt);
	}
}

class FindNoOfArrayElements
{
	public static void main(String arg[])
	{
		System.out.println("Enter the no of elements: ");
		Scanner sobj = new Scanner(System.in);
		int iLength = sobj.nextInt();
		
		ArrayX obj = new ArrayX(iLength);
		
		obj.Accept();
		obj.Display();
		
		obj.CountOfArrayElements();
	}
}