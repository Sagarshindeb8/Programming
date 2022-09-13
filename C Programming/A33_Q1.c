//LB Assignment no:33, Question no:1.
//Program which accepts one number and position from user and 
//count number of ON(1) bits in it without using % and / operator.
//Inpiut: 11
//Output: 3

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
	UINT iCnt = 0;
/*
	for(iCnt=0;iNo;iNo>>=1)
	{
		iCnt = iCnt + (iNo & 1);
	}
*/
	while(iNo > 0)
	{
		iCnt = iCnt + (iNo & 1) //Gives either 0 or 1.
		iNo = iNo >> 1;	//bitwise rightshift.
	}
	return iCnt;
}

int main()
{
	UINT iValue = 0;
	UINT Pos = 0;
	int iRet = 0;
	
	printf("Enter the number");
	scanf("%i", &iValue);

	iRet = CountOne(iValue);

	printf("Number of ON bits are: %d", iRet);

	return 0;
}