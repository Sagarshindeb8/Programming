//LB Assignment no:25, Question no:2.
//Program which accept string from user and convert it in upper case.

//Input: "Marvellous Multi OS"
//Output: "MARVELLOS MULTI OS"

#include<stdio.h>

int strlwrx(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <='z'))
		{
			*str = *str - 32;
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