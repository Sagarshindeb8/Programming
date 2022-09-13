//Write a program to accept 2 nos from user & display the number with the power of the second no.
//input: a = 2, b = 4
//output: iRet = 16 (2*2*2*2)
//using for loop

#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Power(int iNo1, int iNo2)
{
	ULONG lMult = 1;
	register int iCnt = 0;
	
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		lMult = lMult*iNo1;
	}
	return lMult;
}

int main()
{
	auto int a = 0;
	auto int b = 0;
	ULONG lRet = 0;
	
	printf("Enter the first number: \n");
	scanf("%d",&a);
	
	printf("Enter the second number: \n");
	scanf("%d",&b);
	
	lRet = Power(a,b);
	
	printf("The result is: %ld\n",lRet);
	
	return 0;
}