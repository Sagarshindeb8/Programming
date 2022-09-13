//Pattern printing
//Complexity: O(N SQ)
//Input: Row = 4 Column = 4
/*
Output:
		$	*	*	*
		#	$	*	*
		#	#	$	*
		#	#	#	$
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0;
	
	if(iRow != iCol) //filter (only for diagonal problem statement)
	{
		printf("Invalid input \nNumber of Row and Column should be equal.");
		return;
	}
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{	
			if(j==i)
			{
				printf("$\t");
			}
			else if(i>j)
			{			
				printf("#\t");
			}
			else if(i>j) //else
			{
				printf("*\t");
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