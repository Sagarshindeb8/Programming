//Assignment no: 6, Q4.
//Write a program which accepts number from user and count frequency of 4 in it.
//Input:2395, Output: 0, 922432 - 1. 
#include<stdio.h>
int Countfour(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit = iNo % 10;
		if(iDigit == 4)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}
int main()
{
	int iValue = 0;
	int bRet = 0;
	
	printf("Enter the number");
	scanf("%d",&iValue);
	
	bRet = Countfour(iValue);
	printf("%d",bRet);
	
	return 0;
}

