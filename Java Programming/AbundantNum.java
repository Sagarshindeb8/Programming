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

    public void CheckAbundantNum()
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt=1;iCnt<iNo;iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum > iNo)
        {
            System.out.println("The number is Abundant number");
        }
        else
        {
            System.out.println("The number is not an Abundant number");
        }
    }
}

public class AbundantNum
{
    public static void main(String arg[])
    {
        number obj = new number();
        obj.Accept();
        obj.CheckAbundantNum();
    }
}
