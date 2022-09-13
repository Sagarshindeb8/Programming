//LB Assignment no:8, Question no:4.
//Program to accept N numbers from user and return the frequency of 11 from it.
//input: N: 6
//Elements: 85 66 11 11 93 88
//output: 2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int iCnt = 0;
	int iDigCnt = 0;
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			iDigCnt++;
		}
	}
	return iDigCnt;
}

int main()
{
	int iCnt = 0;
	int iSize = 0;
	int iRet = 0;
	int *p = NULL;
	
	printf("Enter the number of elemetns \n");
	scanf("%d",&iSize);
	
	p= (int*)malloc(iSize*sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d elements\n", iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element %d \n", iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet = Frequency(p,iSize);
	if(iRet == 1)
	{
		printf("11 is present");
	}
	if(iRet == 0)
	{
		printf("11 is not present");
	}
	
	free(p);;
	
	return 0;
}