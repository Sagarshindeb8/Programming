//LB Assignment no:37, Question no:1.
//Write a recursive program which display below pattern.
//Input: 5
//Output: * * * * *

#include <stdio.h>

void Display(int iNo)
{
	static int iCnt = 0;
	if(iCnt < iNo)
	{
		printf("*\t");
		iCnt++;
		Display(iNo);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the value:\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}