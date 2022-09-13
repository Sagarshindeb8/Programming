import java.util.*;

class number
{
    private int LowerLimit;
    private int UpperLimit;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the Lower Limit");        
        this.LowerLimit = sobj.nextInt();
		
		System.out.println("Enter the Upper Limit");        
        this.UpperLimit = sobj.nextInt();
    }

    public void CheckPrimeNum()
    {
        int flag = 0;            
        int i = 0;
        int j = 0;  

        for(i=LowerLimit;i<=UpperLimit;i++)
        {
           for(j=2;j<i;j++)
		   {
				if(i % j == 0)
				{
					flag = 0;
                    break;
				}
				else
				{
					flag = 1;
				}
		   }
			if(flag == 1)
			{
				System.out.println(i);			
			}
		}
    }
}

public class PrimeNumInRange 
{
    public static void main(String arg[])
    {
        number obj = new number();
        obj.Accept();
        obj.CheckPrimeNum();
    }
}
