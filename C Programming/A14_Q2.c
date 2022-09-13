//LB Assignment no:14, Question no:2.
//Accept number of rows and number of columns from user and display below pattern.
//Input: Row: 4 Cloumn: 4
//Output:
/*
	A B C D
	a b c d
	A B C D
	a b c d
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0;
    char ch1 = '\0';
	char ch2 = '\0';
		
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch1='A',ch2='a';j<=iCol;j++,ch1++,ch2++)
		if((i==1) || (i==3)) 
		{					
			printf("%c\t",ch1);									
		}
		else
		{					
			printf("%c\t",ch2);									
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