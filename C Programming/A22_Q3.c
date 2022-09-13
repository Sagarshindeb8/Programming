//LB Assignment no:22, Question no:3.
//Program which accept character from user and check whether it is digit or not (0-9).

//Input: F
//Output: TRUE

//Input: d
//Output: FALSE

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
	if((ch >= '0') && (ch <= '9'))
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	bRet = ChkDigit(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Digit");
	}
	else
	{
		printf("It is not a Digit");
	}	
	return 0;
}