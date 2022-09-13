//LB Assignment no:33, Question no:3.
//Program which accepts two numbers from user and 
//check whether 9th and 12th bit is ON or OFF.
//Inpiut: 257
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

BOOL ChkBit(UINT iNo)
{
	int iMask = 0X00000101;
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