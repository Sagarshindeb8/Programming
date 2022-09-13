//Accept no from user and return the no of difits from that no.
//Input: 721
//Output: 3

#include<stdio.h>

int CountDigits(int iNo)
{	
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
		iCnt++;
		iNo = iNo/10;
	}

	return iCnt;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountDigits(iValue);
	printf("The nos of digits are %d\n",iRet);
	
	return 0;
}