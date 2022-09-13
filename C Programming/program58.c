//Using array with static memory allocation.
//Using loop

#include<stdio.h>

void Display(int ptr[]) //Array is internally considered as pointer & pointer can be treated as array.
{
	register int iCnt = 0;
	printf("Elements of Array are: \n");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\n",ptr[iCnt]);
	}
}

int main()
{
	auto int Arr[5];
	register int iCnt = 0;
		
	printf("Enter Array elements: \n");
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}

	Display(Arr); 
	
	return 0;
}