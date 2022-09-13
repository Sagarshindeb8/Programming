//LB Assignment no:15, Question no:4.
//Accept number of rows and number of columns from user and display below pattern.
//input:  iRow = 4	iCol = 5
/*output:  
		1	2	3	4	5
	   -1  -2  -3  -4  -5
	    1	2	3	4	5
	   -1  -2  -3  -4  -5	   
	    1	2	3	4	5
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0, j = 0;
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=iCol;j++)
		{	
			if((i%2 !=0))
			{
				printf("%d\t",-j);
			}
			else if((i%2 ==0))
			{
				printf("%d\t",j);
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