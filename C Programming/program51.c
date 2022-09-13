//Accept no from user & check whether the no is Armstrong no or not.
//input: 153 (1)3 (5)3 (3)3 = 153
//input: 1634 (1)4 (6)4 (3)4 (4)4 = 1634

#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1, int iNo2)
{
	int iMult = 1;
	register int iCnt = 0;
	
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iMult = iMult*iNo1;
	}
	return iMult;
}

bool CheckArmstrong(int iNo)
{
	int iDigCnt = 0;
	int iTemp = 0;
	int iDigit = 0;
	int iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	iTemp = iNo;
	
	//calculate no. of digits
	while(iNo != 0)
	{
		iDigCnt++;
		iNo = iNo / 10;
	}
	
	iNo = iTemp;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + Power(iDigit,iDigCnt);
		iNo = iNo / 10;
	}
	
	if(iSum == iTemp)
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
	
	printf("Enter the number");
	scanf("%d",&iValue);
	
	bRet = CheckArmstrong(iValue);
	if(bRet == true)
	{
		printf("%d is an Armstrong number",iValue);
	}
	if(bRet == false)
	{
		printf("%d is not an Armstrong number",iValue);
	}
	
	return 0;
}

