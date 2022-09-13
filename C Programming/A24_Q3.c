//LB Assignment no:24, Question no:3.
//Program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

//Input: "MarvellouS"
//Output: 6 (8-2)

#include<stdio.h>

int Difference(char *str)
{
	int iCnt1 = 0;
	int iCnt2 = 0;

	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <='Z'))
		{
			iCnt1++;
		}
		if((*str >= 'a') && (*str <='z'))
		{
			iCnt2++;
		}
		str++;		
	}
	return iCnt2-iCnt1;
}

int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);	
	
	iRet = Difference(arr);
	
	printf("Difference of small and capital characters in the string is: %d",iRet);
	
	return 0;
}