//LB Assignment no:31, Question no:5.
//Program which accepts one number from user and 
//ON its first 4 bits. 
//Return modified number.

//0000 0000 0000 0000 0000 0000 0000 0000
//	0	 0	  0	   0    0    0    0    0  ->0X00000000
//0000 0000 0000 0000 0000 0010 0000 0000
//	0	 0	  0	   0    0    2    0    0  ->0X00000200

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iResult = 0;
	int iMask1 = 0X00000001;
	int iMask2 = 0X00000001;
	int iMask3 = 0X00000001;
	int iMask4 = 0X00000001;
	
	iMask1 = (iMask1<<0);
	iMask2 = (iMask2<<1);
	iMask3 = (iMask3<<2);
	iMask4 = (iMask4<<3);
	
	iResult = ((iNo ^ iMask1) ^ (iNo ^ iMask2) ^ (iNo ^ iMask3) ^ (iNo ^ iMask4));
	return iResult;
}

int main()
{
	int iValue = 0;
	UINT iRet = 0;
	
	printf("Enter the number");
	scanf("%i", &iValue);

	iRet = OffBit(iValue);
	
	printf("Modified number with 7th and 10th bit OFF is: %i", iRet);


	return 0;
}