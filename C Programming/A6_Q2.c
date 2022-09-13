//Assignment no: 6, Q2.
//Write a program which accepts number from user and check whether it contains 0 in it or not.
//Input:2395, Output: There is no zero.
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
	int iDigit = 0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit= iNo % 10;
		if(iDigit == 0)
		{
			return 1;
		}
		iNo = iNo / 10;
	}
}
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter the number");
	scanf("%d",&iValue);
	
	bRet=ChkZero(iValue);
	if(bRet == TRUE)
	{
		printf("It contains zero");
	}
	else
	{
		printf("There is no zero");
	}
	
	return 0;
}

