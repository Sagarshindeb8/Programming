//Problems on 'N' numbers
//Using array with static memory allocation.
//Using loop

#include<stdio.h>

int main()
{
	auto int Arr[5];
	int iCnt = 0;
		
	printf("Enter Array elements: \n");
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	printf("Elements of Array are: \n");
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}
		
	return 0;
}