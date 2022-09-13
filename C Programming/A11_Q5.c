//LB Assignment no:10, Question no:5.
//Program to accept N numbers from user and display the summation of digits of each number.
//input: N: 6
//Elements: 8225 665 3 76 953 858
//output: 17 17 3 13 17 21

#include<stdio.h>
#include<stdlib.h>

void DisplaySum(int Arr[],int iLength)
{
	int iCnt = 0;
	int iSum = 0; 
	int iDigit = 0;
	
	for(iCnt = 0;iCnt < iLength;iCnt++)
	{	
		iSum = 0; 
		
		while(Arr[iCnt] > 0)
		{
			iDigit = Arr[iCnt] % 10;
			iSum = iSum + iDigit;
			Arr[iCnt] = Arr[iCnt] / 10;
		}
		printf("%d\n",iSum);
		
	}
}

int main()
{
	auto int iSize = 0;
	auto int iCnt = 0;
	auto int *p = NULL;
	
	printf("Enter the no. of numbers\n");
	scanf("%d",&iSize);
		
	p = (int *)malloc(iSize*sizeof(int));
	
	printf("Enter %d elements\n",iSize);
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		printf("Enter the element: %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	DisplaySum(p,iSize);
	
	free(p);
	
	return 0;
}