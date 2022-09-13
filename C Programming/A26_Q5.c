//LB Assignment no:26, Question no:5.
//Program which accept string from user and reverse that string in place.

//Input: "abcd"
//Output: "dcba"

//Input: "abba"
//Output: "abba"

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
	char *start = str;
	char *end = str;
	char temp;
	while(*end != '\0')
	{
		end++;
	}
	end--;
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
	
}

int main()
{
	char cValue;
	char arr[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);
	
	StrRevX(arr);
	
	printf("Modified String is %s", arr);
		
	return 0;
}