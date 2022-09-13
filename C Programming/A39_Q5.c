//LB Assignment no:39, Question no:5.
//Write a recursive program which accept no from user and return its reverse number.
//Input: 523
//Output: 325

#include <stdio.h>

int Reverse(int iNo)
{
	static int iDigit = 0;
	static int iDigCnt = 0;
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iDigCnt = (iDigCnt*10) + (iDigit);
		iNo = iNo / 10;
		Reverse(iNo);
	}
	return iDigCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet = Reverse(iValue);
	
	printf("%d", iRet);
	
	return 0;
}