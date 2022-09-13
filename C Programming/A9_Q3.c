//LB Assignment no:9, Question no:3.
//Accept N numbers from user and check whether that number contains 11 in it or not.
//input: N: 6
//Elements: 85 66 11 80 93 88
//output: 11 is present

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
	int iCnt=0;
	BOOL bDigit= FALSE;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			bDigit = TRUE;
			break;
		}
		else
		{
			bDigit = FALSE;
		}
	
	}
	return bDigit;	
}
int main()
{
	int iSize = 0;
	BOOL bRet = FALSE;
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
	bRet = Check(p,iSize);
	if(bRet == TRUE)
	{
		printf("11 is present.");
	}
	else
	{
		printf("11 is absent.");
	}
	free(p);
	
	return 0;
}