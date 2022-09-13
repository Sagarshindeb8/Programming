// Program to display numbers using looping by taking inputs from user.
// Input: 5
// Output: 1 2 3 4 5

#include <stdio.h>

void Display(int iNo)
{	
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d", &iValue);
	
	Display(iValue);
	
	return 0;
}