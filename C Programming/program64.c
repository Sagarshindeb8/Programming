//Accept N numbers and return the largest number from the N numbers.

#include<stdio.h>
#include<stdlib.h>

int MaximumNum(int Arr[],int iLength)
{
	int iCnt = 0;
	int iMax = Arr[0]; // to accomodate negative nos.
	
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
	}
	return iMax;
}

int main()
{
	auto int iSize = 0;
	auto int iCnt = 0;
	auto int *p = NULL;
	auto int iRet = 0;
	
	printf("Enter the no. of numbers\n");
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize*sizeof(int));
	
	printf("Enter the values\n");
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet = MaximumNum(p,iSize);
	
	printf("The Maximum Number is: %d \n",iRet);
	
	free(p);
	
	return 0;
}