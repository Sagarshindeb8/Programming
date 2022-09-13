//LB Assignment no:37, Question no:4.
//Write a recursive program which display below pattern.
//Input: 6
//Output: A B C D E F

#include <stdio.h>

void Display(int iNo)
{
	int iCnt = 1;
	static char ch = 'A';
	if(iCnt <= iNo && ch <='Z')
	{
		printf("%c\t",ch);
		ch++;
		iCnt++;
		Display(iNo-1);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the value:\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}