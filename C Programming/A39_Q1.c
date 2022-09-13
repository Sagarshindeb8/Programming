//LB Assignment no:39, Question no:1.
//Write a recursive program which accepts string from user and count white spaces.
//Input: HE llo WOr lD
//Output: 3

#include <stdio.h>

int WhiteSpace(char *str)
{
	static int Count = 0;
	if(*str != '\0')
	{
		if(*str == ' ')
		{
			Count++;
		}
		str++;
		WhiteSpace(str);
	}	
	return Count;
}

int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the string:\n");
	scanf("%[^'\n']s", arr);
	
	iRet = WhiteSpace(arr);
	
	printf("The number of WhiteSpace characters in the string are: %d", iRet);
	
	return 0;
}