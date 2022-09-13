//LB Assignment no:2, Question no:1.
//1.Program to accept one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
		
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*");
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
