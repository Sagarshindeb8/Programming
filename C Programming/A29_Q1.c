//LB Assignment no:29, Question no:1.
//Program which checks whether 15th bit is ON or OFF.

//0000 0000 0000 0000 0100 0000 0000 0000
//	0	 0	  0	   0    4    0    0    0 ->0X00004000

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
	int iMask = 0X00004000;
	int iResult = 0;
	
	iResult = iNo & iMask;
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
	
	printf("Enter the number");
	scanf("%d", &iValue);

	bRet = ChkBit(iValue);
	
	if(bRet == TRUE)
	{	
		printf("Bit is ON");
	}
	else
	{	
		printf("Bit is OFF");
	}

	return 0;
}