//LB Assignment no:17, Question no:4.
//Accept number of rows and number of columns from user and display below pattern.
//input:  iRow = 4	iCol = 5
/*output:  
		* * * * * *
		*       * *
		*     *   *
		*   *     *
		* *       *
		* * * * * *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0, j = 0;
		for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{	
			if((i == 1) || (i == iRow) || (j == 1) || (j == iCol)|| (i == j))
			{			
				printf("*\t");
			}		
			else 
			{
				printf(" \t");
			}					
		}
		printf("\n");
	}

}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter the number of rows and columns. \n");
	scanf("%d%d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}