//Head Recursion
//Printing values by stack back tracking.
//String display using while loop
//Using if cond. (Improvised) Reverse output by changing the sequence of instructions and recursive call.
#include<stdio.h>

void Display(char *str)
{
	if(*str != '\0')
	{
		Display(str+1); //Head Recursion
		printf("%c\n",*str);
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