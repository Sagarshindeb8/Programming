//LB Assignment no:7, Question no:1.
//Program to accept one number from user and return multiplication of all digits.
//input: 2395, output: 270
#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigit = 0;
	int iMult = 1;
	if(iNo <= 0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit = iNo % 10;
		if(iDigit>0)
		{
		iMult= iMult*iDigit;
		}
		iNo = iNo / 10;
	}
	return iMult;
}

int main()
{	
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	iRet=MultDigits(iValue);
	printf("%d",iRet);
	
	return 0;
}
