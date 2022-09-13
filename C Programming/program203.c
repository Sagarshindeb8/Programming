//Recursion
//Accept number from user and print that number of characters.
//Using if cond. (Improvised)
#include<stdio.h>

void Display(int iNo)
{
	static char ch = 'a';
	
	if(iNo > 0)
	{
		printf("%c\t", ch);
		ch++;
		iNo--;
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