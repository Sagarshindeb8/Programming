//LB Assignment no:15, Question no:5.
//Accept number of rows and number of columns from user and display below pattern.
//input:  iRow = 4	iCol = 4
/*output:  
			1	2	3	4
			2	3	4	5
			3	4	5	6
			4	5	6	7
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0, j = 0, iDigit = 1;	
	for(i=1;i<=iRow;i++,iDigit=iDigit-3)
	{		
		for(j=1;j<=iCol;j++,iDigit++)
		{
			if(i==1 && iDigit<=4)
			{
				printf("%d\t",iDigit);
			}
			else
			{
				printf("%d\t",iDigit);
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