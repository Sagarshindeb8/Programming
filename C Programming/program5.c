//Write a program to perform addtion of 2 numbers.(Using Function)

#include<stdio.h>

int Addition(int iValue1, int iValue2)
{
	int iRet = 0;
	iRet = iValue1 + iValue2;
	return iRet;
}

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