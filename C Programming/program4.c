//Write a program to perform addtion of 2 numbers.(Naming convention)

#include<stdio.h>

int main()
{	
	int iNo1 = 0;
	int iNo2 = 0;
	int iAns = 0;
	
	printf("Enter first number: \n");
	scanf("%d",&iNo1);
	
	printf("Enter second number: \n");
	scanf("%d",&iNo2);

	
	iAns = iNo1 + iNo2;
	
	printf("The addition is: %d", iAns);
	
	return 0;
}