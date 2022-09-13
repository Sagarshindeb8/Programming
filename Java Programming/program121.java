//Pattern printing using OOP in Java
/*	
	Input:
	iRow:4, iCol:4
	Output:
	*	*	*	*
	*	*	*	*
	*	*	*	*
	*	*	*	*
*/

import java.lang.*;
import java.util.*;

class Pattern
{
	private int iRow;
	private int iCol;
	
	public Pattern(int a, int b)
		{
			this.iRow = a;
			this.iCol = b;
		}
		
	public void DisplayPattern()
		{
			int i = 0;		
			int j = 0;		
			
			for(i=1;i<=iRow;i++)
			{
				for(j=1;j<=iCol;j++)
				{
					System.out.print("*\t");
				}
				System.out.println();
			}
		}
}

class program121
{
	public static void main(String arg[])
	{
		Pattern obj = new Pattern(4,4);
		
		obj.DisplayPattern();
	
	}
}