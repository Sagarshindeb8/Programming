//LB Assignment no:25, Question no:5.
//Program which accept string from user and count the number of white spaces.

//Input: "Marvellous"
//Output: 0

//Input: "Marvellous Excellent"
//Output: 1

//Input: "Sagar B Shinde"
//Output: 2

#include<stdio.h>

int CountWhite(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str == ' ')
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
	
	iRet = CountWhite(arr);
	
	printf("The no of white spaces in the string are: %d",iRet);

		
	return 0;
}