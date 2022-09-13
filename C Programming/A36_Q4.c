//LB Assignment no:36, Question no:4.
//Write a recursive program which display below pattern.
//Output: A B C D E F

#include <stdio.h>

void Display()
{
	 char cCnt = 'A';
	if(cCnt <= 'F')
	{
		printf("%c\t",cCnt);
		cCnt++;
		Display();
	}
}

int main()
{
	Display();
	
	return 0;
}