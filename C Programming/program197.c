//Recursion
//Accept string from user and calculate small characters in the string.
//Using if cond.
#include<stdio.h>

int CountSmall(char *str)
{
	static int Count = 0;
	if(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			Count++;
		}
		str++;
		CountSmall(str);
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