//LB Assignment no:11, Question no:3
.
//Accept N numbers from user return the difference between largest and smallest number.
//input: N: 6
//Elements: 85 66 3 66 93 88
//output: 90 (93 - 3)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int iCnt = 0;
	int iDigit = Arr[0];
	int iSmall = Arr[0];
	int iLarge = Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt] < iDigit)
		{
			iSmall = Arr[iCnt];
		}	
	}
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt] > iDigit)
		{
			iLarge = Arr[iCnt];
		}	
	}
	return (iLarge - iSmall);	
}
int main()
{
	int iSize = 0;
	int iValue = 0;
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
	iRet = Difference(p,iSize);
	
	printf("Difference is %d",iRet);	
		
	free(p);
	
	return 0;
}