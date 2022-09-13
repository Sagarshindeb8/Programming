//Recursion
//Pattern Printing values by stack back tracking.
//String display using while loop
//Using if cond. (Improvised) 
#include<stdio.h>

void Display(char *str)
{
	if(*str != '\0')
	{
		printf("%s\n",str);
		Display(str+1);
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