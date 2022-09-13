//LB Assignment no:28, Question no:1.
//Program which accept string from user and copy the contents of that string into other string in reverse order.

//Input: "Sagar Shinde"
//Output:"ednihS ragaS" in another string.


#include<stdio.h>
#include<stdlib.h>

void StrCpyRev(char *src, char *dest)
{
	while(*src != 0)
	{
		src++;
	}
	src--;
	while(*dest != src[0])
	{
		*dest = *src;
		dest++;
		src--;				
	}
	*dest = '\0';
}

int main()
{
	char arr[20] = "Marvellous Multi OS";
	char brr[20]; //Empty string.

	StrCpyRev(arr, brr);
	
	printf("String after copy: %s", brr);

	return 0;
}