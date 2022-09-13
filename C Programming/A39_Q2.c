//LB Assignment no:39, Question no:2.
//Write a recursive program which accept number from user and return largest digit.
//Input: 87983
//Output: 9

#include <stdio.h>

int Max(int iNo)
{
	static int iDigit = 0;
	static int iLarge = 0;
	if(iNo != 0)
	{		
		iDigit = iNo % 10;
		if(iDigit > iLarge)
		{
			iLarge = iDigit;
			iNo = iNo / 10;
			Max(iNo);
		}		
	}
	return iLarge;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the value:\n");
	scanf("%d",&iValue);
	
	iRet = Max(iValue);
	printf("The largest digit in %d is: %d",iValue,iRet);
	
	return 0;
}