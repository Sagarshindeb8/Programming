//LB Assignment no:23, Question no:4.
//Program which accept character from user and check whether it is special symbol or not
//(!,@,#,$,%,^,&,*).

//Input: %
//Output: TRUE

//Input: d
//Output: FALSE

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
	if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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
	
	bRet = ChkSpecial(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Special Character");
	}
	else
	{
		printf("It is not a Special Character");
	}	
	return 0;
}