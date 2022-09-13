//LB Assignment no:16, Question no:1.
//Accept number of rows and number of columns from user and display below pattern.
//Input: Row: 4 Cloumn: 4
//Output:
/*
	*	#	#	#
	*	*	#	#
	*	*	*	#
	*	*	*	*
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0;
 		
	for(i=1;i<=iRow;i++)
	{		
		
		for(j=1;j<=iCol;j++)
		{					
			if(i>=j)
			{
				printf("*\t");
			}
			else if(i<j)
			{				
				printf("#\t");
			}			
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Please enter the number of rows: \n");
	scanf("%d",&iValue1);
	
	printf("Please enter the number of columns: \n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}