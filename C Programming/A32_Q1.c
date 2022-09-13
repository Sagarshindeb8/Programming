//LB Assignment no:32, Question no:1.
//Program which accepts one number and position from user and 
//check whether bit at that position is on or off.
//If bit is on return TRUE otherwise return FALSE. 
//Inpiut: 10 2
//Output: TRUE

//0000 0000 0000 0000 0000 0000 0000 0001
//	0	 0	  0	   0    0    0    0    1  ->0X00000001

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, UINT iPos)
{
	int iMask = 0X00000001;
	UINT iResult = 0;
	
	iMask = iMask << (iPos-1);
	iResult = iNo & iMask;
	if(iResult == 0)
	{
		return false;
	}
	else
	{
		return true;
	}

}

int main()
{
	UINT iValue = 0;
	UINT Pos = 0;
	BOOL bRet = FALSE;
	
	printf("Enter the number");
	scanf("%i", &iValue);
	
	printf("Enter the position");
	scanf("%i", &Pos);

	bRet = ChkBit(iValue, Pos);
	if(bRet ==TRUE)
	{	
		printf("Bit is ON");
	}
	else
	{
		printf("Bit is OFF");
	}

	return 0;
}