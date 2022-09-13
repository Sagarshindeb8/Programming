//Tail Recursion
//String display using while loop
//Using if cond. (Improvised) 
#include<stdio.h>

void Display(char *str)
{
	if(*str != '\0')
	{
		printf("%c\n",*str);
		str++;
		Display(str); //Tail Recursion
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