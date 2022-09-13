//Accept N numbers and return the smallest number from the N numbers.

#include<stdio.h>
#include<stdlib.h>

int MinimumNum(int Arr[],int iLength)
{
	int iCnt = 0;
	int iMin = Arr[0];
	
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}
	}
	return iMin;
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
	
	iRet = MinimumNum(p,iSize);
	
	printf("The Minimum Number is: %d \n",iRet);
	
	free(p);
	
	return 0;
}