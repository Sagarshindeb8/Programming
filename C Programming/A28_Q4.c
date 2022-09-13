//LB Assignment no:28, Question no:4.
//Program which accept string from user and copy the contents of that string into other string by converting all capital charactes into small case.

//Input: "Sagar B Shinde"
//Output:"sagar b shinde" in another string.


#include<stdio.h>
#include<stdlib.h>

void StrCpyCap(char *src, char *dest)
{
	while(*dest != src[0])
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*src = *src + 32;
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

	StrCpyCap(arr, brr);
	
	printf("String after copy: %s", brr);

	return 0;
}