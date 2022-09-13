//LB Assignment no:39, Question no:3.
//Write a recursive program which accept string from user and count number of small characters.
//Input: Hello
//Output: 4

#include <stdio.h>

int Small(char *str)
{
	static int Count = 0;
	if(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			Count++;
		}
		str++;
		Small(str);
	}	
	return Count;
}

int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s", arr);
	
	iRet = Small(arr);
	
	printf("The number of small case characters in the string are: %d", iRet);
	
	return 0;
}