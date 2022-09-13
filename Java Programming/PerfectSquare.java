import java.lang.*;
import java.util.*;

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number : ");
        this.iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Value is : "+this.iNo);
    }

    public void CheckPerfectSquare()
	{		
		int sqrt = ((int)Math.sqrt(iNo));
		System.out.println("Sqrt: "+ sqrt);
		
		if(sqrt * sqrt == iNo)
		{
			System.out.print("It is a Perfect Square.");
		}
		else
		{
			System.out.print("It is not a Perfect Square.");
		}
	}	
}

class PerfectSquare
{
    public static void main(String arg[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.CheckPerfectSquare();
    }
}