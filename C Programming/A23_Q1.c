//LB Assignment no:23, Question no:1.
//Program which displays ASCII table. 
//Table contains symbol, Decimal, Hexadecimal and Octal representation of every number from 0 to 255..

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
	int iCnt = 0;
	for(iCnt=0;iCnt<=255;iCnt++)
	{
		printf("The ASCII value of %c is %d\n",iCnt,iCnt);
	}
}

int main()
{
	DisplayASCII();
	
	return 0;
}