//Program to accept number from used & display that number of times Hello on screen
//If the user enters negative value display message as "Enter positive value" and exit the program.(Filter)
#include<stdio.h>

//Demonstration of ITERATION

void Display(int iNo)  // Function definition
{
	int iCnt = 0;
	
	if(iNo < 0)	//Filter
	{
		printf("Please enter positive value\n");
		return;
	}
	
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