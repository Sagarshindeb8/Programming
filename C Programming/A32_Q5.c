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

UINT ToggleBit(UINT iNo)
{
	//a +=b;
	//a = a + b;
	iNo = iNo | (iNo >> 1);
	iNo = iNo | (iNo >> 2);
	iNo = iNo | (iNo >> 4);
	iNo = iNo | (iNo >> 8);
	iNo = iNo | (iNo >> 16);
	return iNo ^(((iNo + 1)>>1)+1);	 
}

int main()
{
	UINT iValue = 0;
	UINT Pos = 0;
	UINT iRet = 0;
	
	printf("Enter the number");
	scanf("%i", &iValue);

	iRet = ToggleBit(iValue);
	
	printf("Modified Number is: %i", iRet);

	return 0;
}