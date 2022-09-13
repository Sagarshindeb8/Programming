//Program to accept number from user & display that number of times Hello on screen
//Change the value if the user inputs negative value.(Updater)

#include<stdio.h>

//Demonstration of ITERATION

void Display(int iNo)  // Function definition
{
	int iCnt = 0;
	
	if(iNo < 0)	//Updater
	{
		iNo = -iNo;
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