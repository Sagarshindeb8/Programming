//program to check whether a no is armstrong no or not.
//input: 153 (1)3 (5)3 (3)3 = 153
//input: 1634 (1)4 (6)4 (3)4 (4)4 = 1634

#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
	int iDigCnt = 0;
	int iTemp = 0;
	int iCnt = 0;
	int iMult = 1;
	int iDigit = 0;
	int iSum = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	iTemp = iNo;
	//calculate no of digits.
	while(iNo != 0)
	{
		iDigCnt++;
		iNo = iNo / 10;
	}
	
	iNo = iTemp;
	
	//calculate power of digits and add them.
	while(iNo != 0)
	{
		iMult = 1;
		iDigit = iNo % 10;
		
		for(iCnt=1;iCnt <= iDigCnt;iCnt++)
		{
			iMult = iMult * iDigit;
		}
		iSum = iSum + iMult;
		iNo = iNo / 10;
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
	
	printf("Enter the number: \n");
	scanf("%d",&iValue);
	
	bRet = CheckArmstrong(iValue);
	if(bRet == true)
	{
		printf("%d is an Armstrong number.", iValue);
	}
	if(bRet == false)
	{
		printf("%d is not an Armstrong number.", iValue);
	}
	
	return 0;
}