//Recursion
//Accept number from user and print that number of characters.
//Using for cond.
#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	char ch = 'a';
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("%c\t", ch);
		ch++;
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