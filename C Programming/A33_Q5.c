//LB Assignment no:32, Question no:5.
//Program which accepts one number and position from user and 
//Toggle contents of first and last nibble of the number.
//Return the modified number.(nibble = group of 4 bits)


//0000 0000 0000 0000 0000 0000 0000 1111
//0000 0000 0000 0000 0000 0000 0000 1001
//	0	 0	  0	   0    0    0    0    9  ->0X00000009
//0000 0000 0000 0000 0000 0000 0111 1000
//	0	 0	  0	   0    0    0    7    8  ->0X00000078

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iPos1, int iPos2)
{
	int iMask = 0;
	int iResult = 0;
	
	iMask = ((1 << iPos1) - 1) ^ ((1 << (iPos2 - 1)) - 1);
	
	iResult = iNo ^ iMask;
	return iResult;
}

int main()
{
	UINT iValue = 0;
	UINT pos1 = 0;
	UINT pos2 = 0;
	UINT iRet = 0;
	
	printf("Enter the number");
	scanf("%i", &iValue);
	
	printf("Enter the start position");
	scanf("%d", &pos1);
	
	printf("Enter the end position");
	scanf("%d", &pos2);

	iRet = ToggleBitRange(iValue, pos1, pos2);
	
	printf("Modified Number is: %i", iRet);

	return 0;
}