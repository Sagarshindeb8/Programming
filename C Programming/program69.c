//Accept N numbers along with a number and return the index of that no. which occurs initially.
//SearchFirstOccurance
#include<stdio.h>
#include<stdlib.h>

int SearchFirstOccurance(int Arr[],int iLength,int iNo)
{
	int iCnt = 0;
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{			
			break;
		}
	}
	if(iCnt == iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}

int main()
{
	auto int iSize = 0;
	auto int iCnt = 0;
	auto int iNo = 0;
	auto int *p = NULL;
	auto int iRet = 0;
	
	printf("Enter the no. of elements\n");
	scanf("%d",&iSize);
	
	printf("Enter the no.to check the first occurance\n");
	scanf("%d",&iNo);
	
	p = (int *)malloc(iSize*sizeof(int));
	
	printf("Enter the values\n");
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet = SearchFirstOccurance(p,iSize,iNo);
	
	if(iRet == -1)
	{
		printf("There is no such element in the array.\n");
	}
	else
	{
		printf("Element first occured at: %d\n",iRet);
	}
	
	free(p);
	
	return 0;
}