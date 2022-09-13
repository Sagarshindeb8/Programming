//LB Assignment no:12, Question no:2.
//Accept numbers from user and display below pattern.
//input: 5
//output: 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>


void Pattern(int iNo)
{
	int iCnt = 0;
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{		
		printf("%d\t#\t",iCnt);			
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