//Program to display 1 to 5 numbers using looping take input from user.
//Input: 5 
//Output: 1 2 3 4 5

#include <stdio.h>

void Display(int iNo)
{	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	/* 
	//	  1		  2		   3
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\n",iCnt); // 4
	}
	*/
	int iCnt = 1; // 1
	//		2
	while(iCnt<=iNo)
	{
		printf("%d\n",iCnt); //4
		iCnt++;				//3
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