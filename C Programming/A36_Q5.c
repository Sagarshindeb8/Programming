//LB Assignment no:36, Question no:5.
//Write a recursive program which display below pattern.
//Output: a b c d e f

#include <stdio.h>

void Display()
{
	static char cCnt = 'a';
	if(cCnt <= 'f')
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