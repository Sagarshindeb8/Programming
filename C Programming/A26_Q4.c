//LB Assignment no:26, Question no:4.
//Program which accept string from user and accept one character.Return index of last occurance of that character.

//Input: "Marvellous Multi OS"
//		  M
//Output: 11

//Input: "Marvellous Multi OS"
//		  e
//Output: 15

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
	int iDigit = 0;
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str == ch)
		{
			iDigit = iCnt;
			
		}
		iCnt++;
		str++;		
	}
	return iDigit;
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
	
	iRet = LastChar(arr, cValue);
	
	printf("Character location is %d", iRet);
		
	return 0;
}