//LB Assignment no:11, Question no:1.
//Accept N numbers from user return the largest number.
//input: N: 6
//Elements: 85 66 3 66 93 88
//output: 93

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
	int iCnt = 0;
	int iDigit = Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt] > iDigit)
		{
			iDigit = Arr[iCnt];
		}	
	}
	return iDigit;	
}
int main()
{
	int iSize = 0;
	int iValue = 0;
	int iRet = 0;
	int iCnt = 0;
	int *p = NULL;
	
	printf("Enter number of elements. \n");
	scanf("%d",&iSize);
	
	printf("Enter the number. \n");
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
	iRet = Maximum(p,iSize);
	
	printf("The Largest number is %d",iRet);	
		
	free(p);
	
	return 0;
}