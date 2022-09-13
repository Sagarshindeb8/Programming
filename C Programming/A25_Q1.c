//LB Assignment no:25, Question no:1.
//Program which accept string from user and convert it in lower case.

//Input: "Marvellous Multi OS"
//Output: "marvellous multi os"

#include<stdio.h>

int strlwrx(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <='Z'))
		{
			*str = *str + 32;
		}
		str++;		
	}
}

int main()
{
	char arr[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);	
	
	strlwrx(arr);
	
	printf("The string in lower case is: %s",arr);
	
	return 0;
}