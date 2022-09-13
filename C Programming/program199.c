//Recursion
//Accept number from user and perform addition of digits.
//Using if cond.
#include<stdio.h>

int DigitSum(int iNo)
{
	static int iSum = 0;
	int iDigit = 0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		DigitSum(iNo);
	}		
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d", &iValue);
	
	iRet = DigitSum(iValue);
	
	printf("Sum of digits is: %d\n", iRet);
	
	return 0;
}