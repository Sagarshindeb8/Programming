//LB Assignment no:12, Question no:4.
//Accept numbers from user and display below pattern.
//input:  4
//output: # 1 * # 2 * # 3 * # 4 *

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("#\t%d\t*\t",iCnt);
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter the number. \n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}