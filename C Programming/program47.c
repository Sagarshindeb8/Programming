//Accept no from user and check whether it is palendrome or not.
//Input: 151
//Output:151

#include<stdio.h>
#include<stdbool.h>

int CheckPallendrome(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	int iTemp = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	int iTemp = iNo;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = iRev = iRev * 10 + iDigit;
		iNo = iNo / 10;
	}
	if(iRev == iTemp)
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
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = CheckPallendrome(iValue);
	if(bRet == true)
	{
		printf("%d is a Pallendrome number\n",iValue);
	}
	else
	{
		printf("%d is a not Pallendrome number\n",iValue);
	}
	return 0;
}