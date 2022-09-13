//Accept N numbers along with a number and whether that no is there in array or not.
//By using Flag

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iCheckNo)
{
	int iCnt = 0;
	bool bFlag = false;	
	
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] == iCheckNo)
		{
			bFlag = true;
			break;
		}
	}
	return bFlag;
}

int main()
{
	auto int iSize = 0;
	auto int iCnt = 0;
	auto int iNo = 0;
	auto int *p = NULL;
	 bool bRet = false;
	
	printf("Enter the no. of numbers\n");
	scanf("%d",&iSize);
	
	printf("Enter the no.to search\n");
	scanf("%d",&iNo);
	
	p = (int *)malloc(iSize*sizeof(int));
	
	printf("Enter the values\n");
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	bRet = Search(p,iSize,iNo);
	if(bRet == true)
	{
		printf("The no is present in the array\n");
	}
	esle
	{
		printf("The no is not present in the array\n");
	}
	
	free(p);
	
	return 0;
}