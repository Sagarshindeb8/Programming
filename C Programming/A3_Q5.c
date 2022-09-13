//Assignment no 3,Q5.Write a program to accept one character from user and check whether that character is a vowel (a,e,i,o,u) or not.
//Input: E Output: TRUE
//Input: d Output: FALSE

#include<stdio.h>
#include<stdbool.h>

typedef int num;
#define TRUE 1
#define FLASE 0

bool ChkVowel(char cVowel)
{
	if(cVowel== 97 || cVowel== 101 || cVowel== 105 || cVowel== 111 || cVowel== 117 ||
		cVowel== 65 || cVowel== 69 || cVowel== 73 || cVowel== 79 || cVowel== 85)
	{
	return 1;
	}
	else
	{
	return false;
	}
}
int main()
{
	 char cValue = '\0';
	 bool bRet = false;
	 printf("Enter character\n");
	 scanf("%c",&cValue);
	 bRet=ChkVowel(cValue);
	 if (bRet==true)
	 {
		printf("It is a vowel");
	 }
	 else
	 {
		printf("It is a not vowel");
	 }
	 return 0;
}