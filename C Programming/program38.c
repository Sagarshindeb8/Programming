//Count no of factors

#include<stdio.h>
int CountFactor(int iNo)
{
	int iCnt = 0;
	int iFactCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iFactCnt++;		
		}
	}
	return iFactCnt;
}
	

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = CountFactor(iValue);
	
	printf("Numbers of factors are: %d\n", iRet);
	
	return 0;
}