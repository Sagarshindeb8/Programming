//LB Assignment no:38, Question no:5.
//Write a recursive program which accept no from user and return its product of digits.
//Input: 523
//Output: 30

#include <stdio.h>

int Mult(int iNo)
{
	if(iNo == 0)
	{
		return(1);
	}
	else
	{
		return ((iNo%10)*Mult(iNo/10));
	}
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet = Mult(iValue);
	
	printf("%d", iRet);
	
	return 0;
}