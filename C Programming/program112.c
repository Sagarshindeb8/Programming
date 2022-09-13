#include<stdio.h>
//Input: 4
//Output: 1*2*3*4 = 24 or,
//Output: 4*3*2*1 = 24

int Factorial(int iNo)
{
	int iFact = 1;
	int iCnt = 0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		//iFact = iFact * iCnt;
		iFact *= iCnt;
		
	}
	return iFact;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	printf("The factorial is: %d", iRet);	
	
	return 0;
}