//LB Assignment no:2, Question no:4.
//Program to accept two numbers from user display first number in second number of times.

#include<stdio.h>

int Display(int iNo, int ifrequency)
{
	int i = 0;
	for(i=1;i<=ifrequency;i++)
	{
		printf("%d",iNo);
		
	}
}
int main()
{
	int iValue = 0;
	int iCount = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	printf("Enter frequency");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	return 0;
}
