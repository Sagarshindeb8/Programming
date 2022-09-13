//LB Assignment no:24, Question no:1.
//Program which accept string from user and count number of capital characters.

//Input: "Marvellous Multi OS"
//Output: 4

#include<stdio.h>

int CountCapital(char *str)
{
	int iCnt = 0;

	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <='Z'))
		{
			iCnt++;
		}
		str++;		
	}
	return iCnt;
}

int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);	
	
	iRet = CountCapital(arr);
	
	printf("Number of capital characters in the string are: %d",iRet);
	
	return 0;
}