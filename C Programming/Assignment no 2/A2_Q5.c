//LB Assignment no:2, Question no:5.
//Program to accept one number from user and check whether the number is even or odd.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Check(int iNo)
{
	if((iNo % 2) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{	
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	bRet = Check(iValue);
	
	if(bRet == TRUE)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	
	return 0;
}
