//LB Assignment no:27, Question no:5.
//Program which accept 2 strings from user and concat second string after first string.

//Input: "Marvellous multi OS"
//Output: "arvellous multi" in another string.


#include<stdio.h>
#include<stdlib.h>

void StrCatX(char *src, char *dest)
{
	while(*src != '\0')
	{
		src++;
	}
	while(*dest != '\0')
	{
		*src = *dest;
		src++;
		dest++;
	}	
	*dest = '\0';
}

int main()
{
	char arr[30] = "Marvellous";
	char brr[30] = "Excellent";

	StrCatX(arr, brr);
	
	printf("String after concat: %s", arr);

	return 0;
}