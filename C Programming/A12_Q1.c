//LB Assignment no:12, Question no:1.
//Accept numbers from user and display below pattern.
//input: N: 5
//output:  A B C D E

#include<stdio.h>

void Pattern(int iNo)
{	
	char ch = '\0';
	int iCnt = 0;
	for(iCnt=0,ch = 'A';iCnt<iNo;iCnt++,ch++)
	{
		printf("%c\t", ch);
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter the number. \n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}