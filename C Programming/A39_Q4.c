//LB Assignment no:39, Question no:2.
//Write a recursive program which accept number from user and return smallest digit.
//Input: 87983
//Output: 9

#include <stdio.h>

int Small(int iNo)
{
	static int iDigit = 0;
	static int iSmall = 9;
	if(iNo != 0)
	{		
		iDigit = iNo % 10;
		if(iSmall > iDigit)
		{
			iSmall = iDigit;			
			iNo = iNo / 10;
			Small(iNo);
		}
	}
	return iSmall;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the value:\n");
	scanf("%d",&iValue);
	
	iRet = Small(iValue);
	printf("The smallest digit in %d is: %d",iValue,iRet);
	
	return 0;
}