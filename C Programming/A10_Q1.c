//LB Assignment no:10, Question no:1.
//Accept N numbers from user and accept another number as NO, check whether NO is present or not.
//input: N: 6
//NO: 66
//Elements: 85 66 3 66 93 88
//output: TRUE

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt = 0;
	bool iDigCnt = false;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iDigCnt = true;
		}	
	}
	return iDigCnt;	
}
int main()
{
	int iSize = 0;
	int iValue = 0;
	bool bRet = false;
	int iCnt = 0;
	int *p = NULL;
	
	printf("Enter number of elements. \n");
	scanf("%d",&iSize);
	
	printf("Enter the number to check whether it is present or not. \n");
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
	bRet = Frequency(p,iSize,iValue);
	if(bRet == true)
	{
		printf("The number %d is present",iValue);
	}
	else
	{
		printf("The number %d is not present",iValue);
	}
		
	free(p);
	
	return 0;
}