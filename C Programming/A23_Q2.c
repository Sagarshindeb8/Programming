//LB Assignment no:23, Question no:2.
//Program which accept character from user. If character is small display its corresponding capital character and if it is capital then display its corresponding small.
//In other cases display as it is.

//Input: Q
//Output: q

//Input: m
//Output: M

//Input: 4
//Output: 4

//Input: %
//Output: %

#include<stdio.h>

void Display(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
	{
		printf("%c\n", ch+32);
	}
	else if((ch >= 'a') && (ch <= 'z'))
	{
		printf("%c\n", ch-32);
	}
	else
	{
		printf("%c\n", ch);
	}
	
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	Display(cValue);	
	
	return 0;
}