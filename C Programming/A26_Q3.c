//LB Assignment no:26, Question no:3.
//Program which accept string from user and accept one character.Return index of first occurance of that character.

//Input: "Marvellous Multi OS"
//		  M
//Output: 0

//Input: "Marvellous Multi OS"
//		  e
//Output: 4

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
	int brr[20];
	while(*str != '\0')
	{
		if(*str == ch)
		{
			brr = str;
		}
		str++;		
	}
	return iCnt;
}

int main()
{
	char cValue;
	char arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter the character\n");
	scanf(" %c",&cValue);
	
	iRet = FirstChar(arr, cValue);
	
	printf("Character location is %d", iRet);
		
	return 0;
}