//Accept no from user & check whether no is perfect no or not.
//Perfect no: Summation of factors = that no.
//Eg: 6 -> 1+2+3 = 6
//Using only 1 service function.
//Reducing Time Complexity.
//Further optimized.

#include<stdio.h>
#include <stdbool.h>

bool CheckPerfect(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = (iNo/2);((iCnt >= 1) && (iSum <= iNo));iCnt--)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;		
		}
	}
	
	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter the number to check whether it is Perfect or not\n");
	scanf("%d",&iValue);
	
	bRet = CheckPerfect(iValue);
	
		if(bRet == true)
	{
		printf("%d is a Perfect number.\n", iValue);
	}
	else
	{
		printf("%d is not a Perfect number.\n", iValue);
	}
	return 0;
}