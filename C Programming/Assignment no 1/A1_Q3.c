//LB Assignment no:1, Question no:3.
//1.Program to print 5 to 1 numbers on screen.

#include<stdio.h>

void Display()
{
	int i = 0;
	i = 5;
	
	for(i=5;i>=1;i--)
	{
		printf("%d",i);
		//i++;
	}
}
int main()
{
	Display();
	
	return 0;
}
