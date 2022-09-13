//LB Assignment no:8, Question no:3.
//Program to accept N numbers from user and display all such elements which are even and divisible by 5.
//input: N: 6
//Elements: 85 66 3 80 93 88
//output: 80

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int iCnt = 0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 2 ==0))
		{
			printf("%d \n",Arr[iCnt]);
		}
	}
}

int main()
{
	int iCnt = 0;
	int iSize = 0;
	int *p = NULL;
	
	printf("Enter the number of elemetns \n");
	scanf("%d",&iSize);
	
	p= (int*)malloc(iSize*sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d elements\n", iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element %d \n", iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	Display(p,iSize);
	
	free(p);;
	
	return 0;
}