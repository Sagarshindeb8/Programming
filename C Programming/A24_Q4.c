//LB Assignment no:24, Question no:4.
//Program which accept character from user and check whether it contains vowels in it or not.

//Input: "marvellous"
//Output: TRUE

//Input: "Demo"
//Output: TRUE

//Input: "xyz"
//Output: FALSE

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
	while(*str != '\0')
	{
		if((*str == 'A') || (*str =='E') || (*str =='I') || (*str =='O') || (*str =='U')||(*str == 'a') || (*str =='e') || (*str =='i') || (*str =='o') || (*str =='u'))
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
	char arr[20];
	BOOL bRet = FALSE;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	bRet = ChkVowel(arr);
	
	if(bRet == TRUE)
	{
		printf("It contains vowel");
	}
	else
	{
		printf("It has no vowel");
	}	
	return 0;
}