#include"header9.h"

/////////////////////////////////////////////////////////////////
// Write a program to perform addtion of 2 numbers.
/////////////////////////////////////////////////////////////////
int main()
{	
	int iNo1 = 0;
	int iNo2 = 0;
	int iAns = 0;
	
	printf("Enter first number: \n");
	scanf("%d",&iNo1);
	
	printf("Enter second number: \n");
	scanf("%d",&iNo2);

	
	iAns = Addition(iNo1,iNo2);
	
	printf("The addition is: %d", iAns);
	
	return 0;
}

/////////////////////////////////////////////////////////////////
//
// Input:	 11		10
// Output:	 21
//
/////////////////////////////////////////////////////////////////

// To compile muiltiple files use below cmd commands
// gcc program7.c library7.c -o program7 - To compile the code
// program7 - To run the code