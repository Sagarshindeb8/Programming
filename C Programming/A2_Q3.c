//LB Assignment no:2, Question no:3.
//Program to accept one number from user if the number is less than 10 and print "Hello" otherwise print "Demo".

#include<stdio.h>

void Display(int iNo)
{
	if(iNo<10)
	{
		printf("Hello");
		
	}
	else
	{
		printf("Demo");	
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
