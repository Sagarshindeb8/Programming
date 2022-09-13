//Recursion
//Accept number from user and print that number of characters.
//Using while cond.
#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	char ch = 'a';
	
	while(iCnt < iNo)
	{
		printf("%c\t", ch);
		ch++;
		iCnt++;
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