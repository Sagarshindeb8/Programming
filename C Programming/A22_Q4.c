//LB Assignment no:22, Question no:4.
//Program which accept character from user and check whether it is small case or not (a-z).

//Input: g
//Output: TRUE

//Input: D
//Output: FALSE

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
	if((ch >= 'a') && (ch <= 'z'))
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
	
	bRet = ChkSmall(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Small case Character");
	}
	else
	{
		printf("It is not a Small case Character");
	}	
	return 0;
}