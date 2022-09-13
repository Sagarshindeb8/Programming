//Pattern printing
//Input: Row = 4 Column = 4
/*
Output:
		$	2	3	4
		1	$	3	4
		1	2	$	4
		1	2	3	$
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{	
			if(j==i)
			{
				printf("$\t");
			}
			else
			{			
				printf("%d\t",j);
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