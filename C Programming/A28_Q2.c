//LB Assignment no:28, Question no:2.
//Program which accept string from user and copy the contents of that string into other string by removing all the white spaces.

//Input: "Sagar B Shinde"
//Output:"SagarBShinde" in another string.


#include<stdio.h>
#include<stdlib.h>

void StrCpyX(char *src, char *dest)
{
	while(*dest != src[0])
	{
		if(*src == ' ')
		{
			src++;
		}
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

int main()
{
	char arr[30] = "Sagar B Shinde";
	char brr[30]; //Empty string.

	StrCpyX(arr, brr);
	
	printf("String after copy: %s", brr);

	return 0;
}