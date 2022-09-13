//LB Assignment no:32, Question no:4.
//Program which accepts one number and position from user and 
//Toggle that bit. Return the modified number.
//Inpiut: 10 3
//Output: 14

//0000 0000 0000 0000 0000 0000 0000 1010
//0000 0000 0000 0000 0000 0000 0000 0100
//	0	 0	  0	   0    0    0    0    1  ->0X00000001

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
	int iMask = 0X00000001;
	UINT iResult = 0;
	
	iMask = (iMask << (iPos-1));
	iResult = iNo ^ iMask;
	return iResult;	
}

int main()
{
	UINT iValue = 0;
	UINT Pos = 0;
	UINT iRet = 0;
	
	printf("Enter the number");
	scanf("%i", &iValue);
	
	printf("Enter the position");
	scanf("%i", &Pos);

	iRet = ToggleBit(iValue, Pos);
	
	printf("Modified Number is: %i", iRet);

	return 0;
}