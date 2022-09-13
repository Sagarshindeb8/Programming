//LB Assignment no:22, Question no:5.
//Program which accept division of student from user and depends on the division display exam timing . There are 4 divisions in school as A,B,C,D.
//Exam of division A at 7 AM, B at 8:30 AM, C at 9:20 AM and D at 10:30 AM.
//(Application should be case insensitive).

//Input: C
//Output: Your exam is at 9:20 AM.

//Input: d
//Output: Your exam is at 10:30 AM.

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
	if((chDiv == 'a') || (chDiv == 'A'))
	{
		printf("Your exam is at 7 AM.\n");
	}
	else if((chDiv == 'b') || (chDiv == 'B'))
	{
		printf("Your exam is at 8.30 AM.\n");
	}
	else if((chDiv == 'c') || (chDiv == 'C'))
	{
		printf("Your exam is at 9.20 AM.\n");
	}
	else if((chDiv == 'd') || (chDiv == 'D'))
	{
		printf("Your exam is at 10.30 AM.\n");
	}
	else
	{
		printf("Invalid Division.\n");
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter your Class Division\n");
	scanf("%c",&cValue);
	
	DisplaySchedule(cValue);	
	
	return 0;
}