//LB Assignment no:10, Question no:5.
//Program to accept N numbers from user and return the product of all odd elements.
//input: N: 6
//Elements: 15 66 3 70 10 88
//output: 45

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
	int iCnt = 0;
	int iMult = 1; 
	
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{
		if((Arr[iCnt] % 2) != 0)
		{
			iMult = iMult * Arr[iCnt];
		}
	}
	return iMult;
}

int main()
{
	auto int iSize = 0;
	auto int iCnt = 0;
	auto int *p = NULL;
	auto int iRet = 0;
	
	printf("Enter the no. of numbers\n");
	scanf("%d",&iSize);
		
	p = (int *)malloc(iSize*sizeof(int));
	
	printf("Enter the values\n");
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet = Product(p,iSize);
	
	printf("The Product is: %d \n",iRet);
	
	free(p);
	
	return 0;
}