//LB Assignment no:38, Question no:3.
//Write a recursive program which accept string from user and count number of characters.
//Input: Hello
//Output: 5

#include <stdio.h>

int Strlen(char *str)
{
	if(*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + Strlen(str+1);
	}
}

int main()
{
	int iRet = 0;
	char arr[20];
	
	printf("Enter the String:\n");
	scanf("%s",arr);
	
	iRet = Strlen(arr);
	
	printf("%d", iRet);
	
	return 0;
}