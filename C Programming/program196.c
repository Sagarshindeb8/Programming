//Recursion
//Accept string from user and calculate small characters in the string.
//Using while loop
#include<stdio.h>

int CountSmall(char *str)
{
	int Count = 0;
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			Count++;
		}
		str++;
	}	
	return Count;
}

int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s", arr);
	
	iRet = CountSmall(arr);
	
	printf("Small characters are: %d\n", iRet);
	
	return 0;
}