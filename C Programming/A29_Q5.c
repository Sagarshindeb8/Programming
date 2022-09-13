//LB Assignment no:29, Question no:5.
//Program which checks whether 7th, 8th and 9th bit is ON or OFF.

//0000 0000 0000 0000 0000 0000 0000 0001
//	0	 0	  0	   0   0     0   0    1   ->0X00000001 
//1000 0000 0000 0000 0000 0000 0000 0000
//	8	 0	  0	   0   0     0    0    0  ->0X80000000

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	int iMask1 = 0X00000001;
	int iMask2 = 0X80000000;
	int iResult = 0;
	
	iResult = ((iNo & iMask1) && (iNo & iMask2));
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