//Assignment no: 6, Q3.
//Write a program which accepts number from user and count frequency of 2 in it.
//Input:2395, Output: 1, 922432 - 3. 
#include<stdio.h>
int CountTwo(int iNo)
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
		if(iDigit == 2)
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
	
	bRet = CountTwo(iValue);
	printf("%d",bRet);
	
	return 0;
}

