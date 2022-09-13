//Recursion
//String display using while loop
//Using if cond. (Improvised) Reverse output by changing the sequence of instructions and recursive call.
#include<stdio.h>

void Display(char *str)
{
	while(*str != '\0')
	{
		printf("%c\n",*str);
		str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s", Arr);
	
	Display(Arr);
	
	return 0;
}