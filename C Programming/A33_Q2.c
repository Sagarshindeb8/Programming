//LB Assignment no:33, Question no:2.
//Program which accepts 2 numbers and display position of 
//common ON bit from that 2 nos. 
//Inpiut: 10 15		(1010	1111)	
//Output: 2	  4		 1111

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1,UINT iNo2)
{
	int iCnt = 0;	
	int pos = 0;	
	
	while((iNo1 > 0) & (iNo1 > 0))
	{
		iCnt = ((iNo1 & 1) & (iNo2 & 1));
		if((iNo1 & iNo2)&1)
		{
			printf("%d",iCnt);
		}		
		iNo1 = iNo1 >> 1;
		iNo2 = iNo2 >> 1;
	}
}

int main()
{
	UINT iValue1 = 0;
	UINT iValue2 = 0;
	
	printf("Enter the number1");
	scanf("%i", &iValue1);
	
	printf("Enter the number2");
	scanf("%i", &iValue2);

	CommonBits(iValue1,iValue2);	

	return 0;
}