//Accept number from user & check whether the number is prime number.
//Using Single function. Without using flag
//if(iCnt>=(iNo/2))
#include<stdio.h>
#include <stdbool.h>
//42,43,39,44 nos programs from drvive
bool CheckPrime(int iNo)
{
	int iCnt = 0;

	for(iCnt = 2;iCnt <= (iNo/2);iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			break;			
		}
	}
	if(iCnt==(iNo/2)+1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = false;

	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet = CheckPrime(iValue);
	
	if(bRet == true)
	{
		printf("The number is a Prime number\n",iValue);
	}
	if(bRet == false)
	{
		printf("The number is not a Prime number\n",iValue);
	}
	
	return 0;
}