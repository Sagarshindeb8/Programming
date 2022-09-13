//LB Assignment no:33, Question no:4.
//Program which accepts one number and two positions from user and 
//check whether bit at first or bit at second position is ON or OFF.
//Inpiut: 10	3	7
//Output: true

//0000 0000 0000 0000 0000 0001 0000 0001
//0000 0000 0000 0000 0000 0001 0000 0001
//	0	 0	  0	   0    0    1    0    1  ->0X00000101

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
	int iMask1 = 0X00000001;
	int iMask2 = 0X00000001;
	int iMask = 0;
	int iResult = 0;
	
	iMask = (iMask1 << (iPos1-1))|(iMask2 << (iPos2-2));
	
	iResult = iNo ^ iMask;
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
	int pos1 = 0;
	int pos2 = 0;
	BOOL bRet = FALSE;
	
	printf("Enter the number");
	scanf("%d", &iValue);
	
	printf("Enter the position 1");
	scanf("%d", &pos1);
	
	printf("Enter the position 2");
	scanf("%d", &pos2);

	bRet = ChkBit(iValue, pos1, pos2);
	
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