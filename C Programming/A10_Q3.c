//LB Assignment no:10, Question no:3.
//Accept N numbers from user and accept range ,return the index of last occurance of that NO.
//input: N: 6
//Elements: 85 66 3 66 93 88
//output: 3

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength, int iNo)
{
	int iCnt=0;
	int iIndex=0;

	for(iCnt=iLength;iCnt>=0;iCnt--)
	{
		if(Arr[iCnt] == iNo)
		{
			iIndex = iCnt;
			break;
		}
		else
		{
			iIndex = -1;
		}	
	}
	return iIndex;	
}

int main()
{
	int iSize = 0;
	int iRet = 0;
	int iCnt = 0;
	int iValue = 0;
	int *p = NULL;
	
	printf("Enter number of elements. \n");
	scanf("%d",&iSize);
	
	printf("Enter the number to find the index. \n");
	scanf("%d",&iValue);
	
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
	iRet = LastOcc(p,iSize,iValue);
	if(iRet == -1)
	{
		printf("There is no such number",iValue);
	}
	else
	{
		printf("Last occurance of number is %d",iRet);
	}
		
	free(p);
	
	return 0;
}