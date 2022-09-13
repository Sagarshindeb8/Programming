//LB Assignment no:12, Question no:5.
//Accept numbers from user and display below pattern.
//input:  8
//output: 2 4 6 8 10 12 14 16

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	int iDigit = 0;

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iDigit = iDigit+2;
		printf("%d\t",iDigit);
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