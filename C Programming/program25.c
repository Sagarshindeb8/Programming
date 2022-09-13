// Accept the number from user & check whether that number is even or odd.
// Without using bool

#include <stdio.h>

int CheckEven(int iNo)
{
	if((iNo % 2) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = CheckEven(iValue);
	
	if(iRet == 1)
	{
		printf("%d is even number", iValue);
	}
	
	else
	{
		printf("%d is odd number", iValue);
	}
	
	return 0;
}