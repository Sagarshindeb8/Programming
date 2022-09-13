//Recursion
//Accept number from user and print that number of characters.
//Using if cond.
#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 0;
	static char ch = 'a';
	
	if(iCnt < iNo)
	{
		printf("%c\t", ch);
		ch++;
		iCnt++;
		Display(iNo);
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