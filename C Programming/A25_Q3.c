//LB Assignment no:25, Question no:3.
//Program which accept string from user and toggle the case.

//Input: "Marvellous Multi OS"
//Output: "mARVELLOS mULTI os"

#include<stdio.h>

int strtogglex(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <='Z'))
		{
			*str = *str + 32;
		}
		else if((*str >= 'a') && (*str <='z'))
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
	
	strtogglex(arr);
	
	printf("The toggled string is: %s",arr);
	
	return 0;
}