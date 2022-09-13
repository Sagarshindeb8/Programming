//LB Assignment no:9, Question no:1.
//Accept N numbers from user and return the difference between frequency of even nos and odd numbers.
//input: N: 7
//Elements: 85 66 3 80 93 88 90
//output: 1 (4 - 3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
	int iCnt=0;
	int iSumEven=0;
	int iSumOdd=0;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iSumEven = iSumEven+Arr[iCnt];
		}
		else
		{
			iSumOdd = iSumOdd+Arr[iCnt];
		}
	
	}
	return (iSumEven-iSumOdd);	
}
int main()
{
	int iSize = 0;
	int iRet = 0;
	int iCnt = 0;
	int *p = NULL;
	
	printf("Enter number of elements. \n");
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize*sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter %d elements \n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element: %d \n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = Frequency(p,iSize);
	
	printf("Result is %d",iRet);
	
	free(p);
	
	return 0;
}