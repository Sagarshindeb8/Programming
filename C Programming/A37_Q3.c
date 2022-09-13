//LB Assignment no:37, Question no:3.
//Write a recursive program which display below pattern.
//Input: 5
//Output: 5 4 3 2 1

#include <stdio.h>

void Display(int iNo)
{
	int iCnt = iNo;
	if(iNo == 0)
	{
		return;
	}
	else
	{
		printf("%d\t*\t",iCnt);
		Display(iNo-1);
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