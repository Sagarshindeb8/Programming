//Problems on 'N' numbers
//Using array with static memory allocation.
//Using loop

#include<stdio.h>

void Display(int *ptr) //To accept the address, pointer is used
{
	register int iCnt = 0;
	printf("Elements of Array are: \n");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\n",*ptr);
		ptr++;
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

	Display(Arr); // Display(100) Call by address
	
	return 0;
}