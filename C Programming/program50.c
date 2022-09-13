//Write a program to accept 2 nos from user & display the number with the power of the second no.
//input: a = 2, b = 4
//output: iRet = 16 (2*2*2*2)

#include "Header50.h"

int main()
{
	auto int a = 0;
	auto int b = 0;
	auto ULONG lRet = 0;
	
	printf("Enter the first number: \n");
	scanf("%d",&a);
	
	printf("Enter the second number: \n");
	scanf("%d",&b);
	
	lRet = Power(a,b);
	
	printf("The result is: %ld\n",lRet);
	
	return 0;
}