//Accept no from user & return the addition of factors of that no.
//Input: 10
//output: factors: 1 2 5 -> 8

#include<stdio.h>

int AddFactor(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;		
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = AddFactor(iValue);
	printf("The Addition of factors is: %d \n", iRet);
	
	return 0;
}