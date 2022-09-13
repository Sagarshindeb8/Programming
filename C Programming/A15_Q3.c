//LB Assignment no:15, Question no:3.
//Accept number of rows and number of columns from user and display below pattern.
//Input: Row: 5 Cloumn: 5
//Output:
/*
	a	b	c	d	e
	1	2	3	4	5
	a	b	c	d	e
	1	2	3	4	5
	a	b	c	d	e
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0, iDigit=1;
	char ch = '\0';
 		
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='a',iDigit=1;i<=iCol,iDigit<=iCol;j++,ch++,iDigit++)
		{
			if(i%2!=0)
			{
				printf("%c\t",ch);
			}
			if(i%2==0)
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