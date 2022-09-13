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

    public void CheckUgly()
	{
		int x = 0;
		while(iNo != 0)
		{
			if(iNo % 2 == 0)
			{
				iNo = iNo / 2;
			}
			else if(iNo % 3 == 0)
			{
				iNo = iNo / 3;
			}
			else if(iNo % 5 == 0)
			{
				iNo = iNo / 5;
			}
			else
			{
				System.out.print("It is not an ugly number.");
				x = 1;
				break;
			}
		}
			if(x == 0)
			{
				System.out.print("It is an ugly number.");
			}			
	}	
}

class UglyNum
{
    public static void main(String arg[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.CheckUgly();
    }
}