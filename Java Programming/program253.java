//Pattern printing
//Input: 78956
/* 
Output:

7 8 9 5 6
7 8 9 5 6
7 8 9 5 6
7 8 9 5 6
7 8 9 5 6

*/
import java.lang.*;
import java.util.*;


class program253
{
	public static void main(String arg[])
	{
        Scanner sobj = new Scanner(System.in);
		
        System.out.println("Enter the Number");
        int no = sobj.nextInt();
		
		String temp = Integer.toString(no);
		char Arr[] = temp.toCharArray();
		
		int i=0, j=0;
		for(i=0;i<Arr.length;i++)
		{
			for(j=0;j<Arr.length;j++)
			{
					System.out.print(Arr[j]+"  ");
			}
			System.out.println();
		}
	}
}