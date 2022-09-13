//Using array with static memory allocation.
//Using loop

#include<stdio.h>

void Display(int Arr[]) 
{
	register int iCnt = 0;
	printf("Elements of Array are: \n");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\n",Arr[iCnt]);
	}
}

int main()
{
	auto int Brr[5];
	register int iCnt = 0;
		
	printf("Enter Array elements: \n");
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Brr[iCnt]);
	}

	Display(Brr); 
	
	return 0;
}