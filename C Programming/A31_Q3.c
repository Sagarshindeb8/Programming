//LB Assignment no:31, Question no:3.
//Program which accepts one number from user and 
//toggle the 7th bit of that number. 
//Return modified number.

//0000 0000 0000 0000 0000 0000 0100 0000
//	0	 0	  0	   0    0    0    4    0 ->0X00000040

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT OffBit(UINT iNo)
{
	int iMask = 0X00000001;
	UINT iResult = 0;
	
	iMask = (iMask << 6);
	iResult = iNo ^ iMask;
	return iResult;
}

int main()
{
	int iValue = 0;
	UINT iRet = 0;
	
	printf("Enter the number");
	scanf("%i", &iValue);

	iRet = OffBit(iValue);	
	
	printf("Modified number with 7th bit OFF is: %i", iRet);

	return 0;
}