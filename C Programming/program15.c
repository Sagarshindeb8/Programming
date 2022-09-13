//Program to accept number from used & display that number of times Hello on screen

#include<stdio.h>

//Demonstration of ITERATION

void Display(int iNo)  // Function definition
{
	int iCnt = 0;
	
	for(iCnt=0;iCnt<iNo;iCnt++) 
	{
		printf("Hello\n");
	}
}

int main()
{	
	int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);   //Function call
	
	return 0; 
}