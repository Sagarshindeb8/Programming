import java.util.*;

class number
{
    private int iNo;

    public void Accept()
    {
        System.out.println("Enter the number");
        Scanner sobj = new Scanner(System.in);
        this.iNo = sobj.nextInt();
    }

    public void CheckStrongNum()
    {
        int iDigit = 0;
        int iMult = 1;
        int iSum = 0;
        int iCnt = 0;
        int iTemp = 0;
        iTemp = iNo;

        while(iNo != 0)
        {   
            iMult = 1;
            iDigit = iNo % 10;
            for(iCnt=1;iCnt<=iDigit;iCnt++)
            {
                iMult = iMult * iCnt;
            }
            
            iSum = iSum + iMult;            
            iNo = iNo / 10;
        }
        iNo = iTemp;

        if(iSum == iNo)
        {
            System.out.println("The number is a Strong number");
        }
        else
        {
            System.out.println("The number is not a Strong number");
        }
    }
}



public class StrongNum 
{
    public static void main(String arg[])
    {
        number obj = new number();
        obj.Accept();
        obj.CheckStrongNum();
    }
}
