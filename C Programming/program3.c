//Write a program to perform addtion of 2 numbers.(Dynamic)

#include<stdio.h>

int main()
{	
	int i = 0;
	int j = 0;
	int k = 0;
	
	printf("Enter first number: \n");
	scanf("%d",&i);
	
	printf("Enter second number: \n");
	scanf("%d",&j);

	
	k = i + j;
	
	printf("The addition is: %d", k);
	
	return 0;
}