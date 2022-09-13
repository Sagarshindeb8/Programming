//Accept N numbers and perform adition of N numbers

#include<stdio.h>
#include<stdlib.h>

int SummationNum(int Arr[],int iLength)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	return iSum;
}

int main()
{
	int iSize = 0;
	int iCnt = 0;
	int *p = NULL;
	int iRet = 0;
	
	printf("Enter the no. of elements\n");
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize*sizeof(int));
	
	printf("Enter the values\n");
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet = SummationNum(p,iSize);
	
	printf("The Summation is: %d \n",iRet);
	
	free(p);
	
	return 0;
}