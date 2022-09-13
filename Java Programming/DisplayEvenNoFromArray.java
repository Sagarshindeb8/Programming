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
	
	public void DisplayEven()
	{
		int iCnt=0;
		System.out.println("The count of even array elements is: ");
		for(iCnt=1;iCnt<Arr.length;iCnt++)
		{
			if(Arr[iCnt]%2 == 0)
			{
				System.out.println(Arr[iCnt]);
			}
		}	
	}
}

class DisplayEvenNoFromArray
{
	public static void main(String arg[])
	{
		System.out.println("Enter the no of elements: ");
		Scanner sobj = new Scanner(System.in);
		int iLength = sobj.nextInt();
		
		ArrayX obj = new ArrayX(iLength);
		
		obj.Accept();
		//obj.Display();
		
		obj.DisplayEven();
	}
}