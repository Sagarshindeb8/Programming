//Pattern printing
//Input: Hello
/* Output:

H e l l o
H e l l o
H e l l o
H e l l o
H e l l o

*/
import java.lang.*;
import java.util.*;


class program248
{
	public static void main(String arg[])
	{
        Scanner sobj = new Scanner(System.in);
		
        System.out.println("Enter the string");
        String str = sobj.nextLine();
		
		char Arr[] = str.toCharArray();
		
		for(int i=0;i<Arr.length;i++)
		{
			for(int j=0;j<Arr.length;j++)
			{
				System.out.print(Arr[j]+"  ");
			}
			System.out.println();
		}

	}
}