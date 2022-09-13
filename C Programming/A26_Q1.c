//LB Assignment no:26, Question no:1.
//Program which accept string from user and accept one character.Check whether that character is present in string or not.

//Input: "Marvellous Multi OS"
//		  e
//Output: TRUE

//Input: "Marvellous Multi OS"
//		  W
//Output: FALSE

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
	while(*str != '\0')
	{
		if(*str == ch)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		str++;		
	}
}

int main()
{
	char cValue;
	char arr[20];
	BOOL bRet = FALSE;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter the character\n");
	scanf(" %c",&cValue);
	
	bRet = ChkChar(arr, cValue);
	
	if(bRet == TRUE)
	{
		printf("Character found");
	}
	else
	{
		printf("Character not found");
	}	
	return 0;
}