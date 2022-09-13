//LB Assignment no:15, Question no:2.
//Accept number of rows and number of columns from user and display below pattern.
//Input: Row: 4 Cloumn: 4
//Output:
/*
	2	4	6	8	10
	1	3	5	7	9
	2	4	6	8	10
	1	3	5	7	9
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0, iDigit=1;
 		
	for(i=1;i<=iRow;i++)
	{
		for(j=1,iDigit=1;i<=iCol,iDigit<=iCol*2;j++,iDigit++)
		{
			if((i%2!=0)&&(j%2) ==0)
			{
				printf("%d\t",iDigit);
			}
			if((i%2==0)&&(j%2) !=0)
			{
				printf("%d\t",iDigit);
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