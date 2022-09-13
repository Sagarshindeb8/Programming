//Program to display 5 times Hello on screen

#include<stdio.h>

//Demonstration of ITERATION

void Display() // Function definition
{
	int iCnt = 0;
	
	//1 Initialization
	//2 Condition
	//3 Displacement
	//4 Loop Body
	
	//	1		2		3
	for(iCnt=0;iCnt<5;iCnt++) //Change in loop counter initialization to 0
	{
		printf("Hello\n"); //4
	}
}

int main()
{	
	Display();  //Function call
	
	return 0; 
}