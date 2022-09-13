//LB Assignment no:27, Question no:1.
//Program which accept string from user and copy the contents of that string into other string.

//Input: "Marvellous Multi OS"
//Output: "Marvellous Multi OS" in another string.


#include<stdio.h>
#include<stdlib.h>

void StrCpyX(char *src, char *dest)
{
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;		
	}
	*dest = '\0';
}

int main()
{
	char arr[30] = "Marvellous Multi OS";
	char brr[30]; //Empty string.

	StrCpyX(arr, brr);
	
	printf("String after copy: %s", brr);

	return 0;
}