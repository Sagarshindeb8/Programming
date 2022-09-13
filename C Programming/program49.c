//Write a program to accept 2 nos from user & display the number with the power of the second no.
//input: a = 2, b = 4
//output: iRet = 16 (2*2*2*2)
//using while loop

#include<stdio.h>

int Power(int iNo1, int iNo2)
{
	int iMult = 1;
	int iCnt = 0;
	while(iCnt<=iNo2)
	{
		iMult = iMult*iNo1;
		iCnt++;
	}
	return iMult;
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;
	
	printf("Enter the first number: \n");
	scanf("%d",&iValue1);
	
	printf("Enter the second number: \n");
	scanf("%d",&iValue2);
	
	iRet = Power(iValue1,iValue1);
	
	printf("The result is: %d\n",iRet);
	
	return 0;
}