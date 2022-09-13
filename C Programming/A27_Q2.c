//LB Assignment no:27, Question no:2.
//Program which accept string from user and copy the contents of that string into other string upto the number.

//Input: "Marvellous Multi OS"
//Output: "Marvellous" in another string.


#include<stdio.h>
#include<stdlib.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
	while((*src != '\0') && (iCnt != 0))
	{
		*dest = *src;
		src++;
		dest++;	
		iCnt--;		
	}
	*dest = '\0';
}

int main()
{
	char arr[30] = "Marvellous Multi OS";
	char brr[30]; //Empty string.

	StrNCpyX(arr, brr, 10);
	
	printf("String after copy: %s", brr);

	return 0;
}