//LB Assignment no:23, Question no:5.
//Program which accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

//Input: A
//Output: Decimal: 65. Octal: 0101. Hexadecimal: 0X41.

#include<stdio.h>

void Display(char ch)
{
	if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
	{
		printf("Decimal: %d\t",ch);
		printf("Octal: %o\t",ch);
		printf("Hexadecimal: %x\t",ch);		
	}
	else
	{
		printf("Select value from A-Z or a-z.\n");
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