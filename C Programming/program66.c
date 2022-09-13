//Accept N numbers along with a number and return the count of other no. number from the N numbers.

#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[],int iLength,int ifreq)
{
	int iCnt = 0;
	int iDigCnt = 0; 
	
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] == ifreq)
		{
			iDigCnt++;
		}
	}
	return iDigCnt;
}

int main()
{
	auto int iSize = 0;
	auto int iCnt = 0;
	auto int iNo = 0;
	auto int *p = NULL;
	auto int iRet = 0;
	
	printf("Enter the no. of numbers\n");
	scanf("%d",&iSize);
	
	printf("Enter the no.to check the frequency\n");
	scanf("%d",&iNo);
	
	p = (int *)malloc(iSize*sizeof(int));
	
	printf("Enter the values\n");
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet = CountFrequency(p,iSize,iNo);
	
	printf("The frequency of %d is: %d \n",iNo,iRet);
	
	free(p);
	
	return 0;
}