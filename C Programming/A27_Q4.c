//LB Assignment no:27, Question no:4.
//Program which accept string from user and copy the small characters of that string into other string.

//Input: "Marvellous multi OS"
//Output: "arvellous multi" in another string.


#include<stdio.h>
#include<stdlib.h>

void StrCpyCap(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'a') && (*src <= 'z'))
		{
			*dest = *src;
			dest++;
		}
			src++;	
	}
	*dest = '\0';
}

int main()
{
	char arr[30] = "Marvellous multi OS";
	char brr[30]; //Empty string.

	StrCpyCap(arr, brr);
	
	printf("String after copy: %s", brr);

	return 0;
}