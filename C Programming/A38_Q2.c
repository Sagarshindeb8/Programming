//LB Assignment no:38, Question no:2.
//Write a recursive program which accept number from user and return summanation of digits.
//Input: 879
//Output: 24

#include <stdio.h>

int Sum(int iNo)
{
	static int iDigit = 0;
	int iSum = 0;
	if(iNo != 0)
	{		
		iSum = (iNo % 10 +Sum(iNo/10));
	}
	return iSum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the value:\n");
	scanf("%d",&iValue);
	
	iRet = Sum(iValue);
	printf("%d",iRet);
	
	return 0;
}