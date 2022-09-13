// Program to display addition of numbers using looping by taking inputs from user.
// Input: 5
// Output: 15 (1+2+3+4+5)

#include <stdio.h>

int Summation(int iNo)
{	
	int iCnt = 0;
	int iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{	
		iSum = iSum + iCnt;
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d", &iValue);
	
	iRet = Summation(iValue);
	printf("The addition of the entered number is: %d\n",iRet);
	
	return 0;
}