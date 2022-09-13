//LB Assignment no:7, Question no:1.
//Program to accept one number from user and return the difference between summanation of even digits and summation of odd digits.
//input: 2395, output: -15 (2-17)
#include<stdio.h>

int CountDiff(int iNo)
{
	int iDigit = 0;
	int iSum1 = 0;
	int iSum2 = 0;
	if(iNo <= 0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iSum1= iSum1+iDigit;
		}
		else
		{
			iSum2= iSum2+iDigit;
		}
		iNo = iNo / 10;
	}
	return (iSum1-iSum2);
}

int main()
{	
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	iRet=CountDiff(iValue);
	printf("%d",iRet);
	
	return 0;
}
