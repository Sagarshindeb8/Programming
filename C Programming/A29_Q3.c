//LB Assignment no:29, Question no:3.
//Program which checks whether 7th, 15th, 21st and 28th bit is ON or OFF.

//0000 1000 0001 0000 0100 0000 0100 0000
//	0	 8	  1	   0   4     0    4    0  ->0X08104040

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	int iMask1 = 0X00000040;
	int iMask2 = 0X00004000;
	int iMask3 = 0X00100000;
	int iMask4 = 0X08000000;
	int iResult = 0;
	
	iResult = ((iNo & iMask1) && (iNo & iMask2) && (iNo & iMask3) && (iNo & iMask4));
	if(iResult == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter the number:\n");
	scanf("%d", &iValue);

	bRet = ChkBit(iValue);
	
	if(bRet == TRUE)
	{	
		printf("Bits are ON");
	}
	else
	{	
		printf("Bits are OFF");
	}

	return 0;
}