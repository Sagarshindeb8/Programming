//LB Assignment no:2, Question no:2.
//1.Program to accept one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
	while(iNo>0)
	{
		printf("*");
		iNo--;
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
