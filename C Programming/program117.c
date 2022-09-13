//Addition of N numbers by taking user input
//Input: 5
//Output: 1+2+3+4+5 = 15

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
	int iSum = 0;
	int iCnt = 0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	return iSum;	
}

int main()
{
	int iLength = 0;
	int iCnt = 0;
	int iRet = 0;
	int *ptr = NULL;
	
	printf("Enter the number of elements \n");
	scanf("%d", &iLength);
	
	ptr = (int *)malloc(sizeof(int)*iLength);
	
	printf("Enter the array elements \n");
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Summation(ptr,iLength);
	
	printf("Addition is: %d\n", iRet);
	
	free(ptr);
	
	return 0;
}