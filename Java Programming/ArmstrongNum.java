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

    public void CheckArmstrong()
	{
		int iDigCnt = 0;
		int iDigit = 0;
		int iTemp = iNo;
		int iCnt = 0;
		int iMult = 0;
		int iSum = 0;
		
		while(iNo != 0)
		{
			iDigCnt++;
			iNo = iNo / 10;			
		}
		iNo = iTemp;		
		
		while(iNo != 0)
		{
			iMult = 1;
			iDigit = iNo % 10;
			for(iCnt=1;iCnt<=iDigCnt;iCnt++)
			{
				iMult = iMult * iDigit;
			}
			
			iSum = iSum + iMult;
			iNo = iNo / 10;
		}		
		if(iSum == iTemp)
		{
			System.out.print("It is an Armstrong number.");
		}
		else
		{
			System.out.print("It is not an Armstrong number.");
		}
	}	
}

class ArmstrongNum
{
    public static void main(String arg[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.CheckArmstrong();
    }
}