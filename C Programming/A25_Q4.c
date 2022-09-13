//LB Assignment no:25, Question no:4.
//Program which accept string from user and display only digits from that string.

//Input: "marve89llous121"
//Output: 89121

#include<stdio.h>

int DisplayDigit(char *str)
{
	while(*str != '\0')
	{
		if((*str >= '0') && (*str <='9'))
		{
			printf("%c", *str);
		}
		str++;		
	}
}

int main()
{
	char arr[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);	
	
	DisplayDigit(arr);
		
	return 0;
}