//LB Assignment no:8, Question no:4.
//Program to accept N numbers from user and return the frequency of 11 from it.
//input: N: 6
//Elements: 85 66 11 66 93 88
//output: 2

#include<stdio.h>
#include<stdlib.h>

int CountFrequency(int Arr[],int iLength,int iNo)
{
	int iCnt = 0;
	int iDigCnt = 0; 
	
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] == iNo)
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
	auto int iValue = 0;
	auto int *p = NULL;
	auto int iRet = 0;
	
	printf("Enter the no. of numbers\n");
	scanf("%d",&iSize);
	
	printf("Enter the no.to check the frequency\n");
	scanf("%d",&iValue);
	
	p = (int *)malloc(iSize*sizeof(int));
	
	printf("Enter the values\n");
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet = CountFrequency(p,iSize,iValue);
	
	printf("The frequency of %d is: %d \n",iValue,iRet);
	
	free(p);
	
	return 0;
}