//LB Assignment no:10, Question no:3.
//Accept N numbers from user and accept range ,display all elements from that range.
//input: N: 6
//Start: 60
//End: 90
//Elements: 85 66 3 76 93 88
//output: 66 76 88

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength, int iStart, int iEnd)
{
	int iCnt=0;
	int iNo=0;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd)) 
		{
			printf("%d\n",Arr[iCnt]);
		}
	}		
}

int main()
{
	int iSize = 0;
	int iCnt = 0;
	int iValue1 = 0;
	int iValue2 = 0;
	int *p = NULL;
	
	printf("Enter number of elements. \n");
	scanf("%d",&iSize);
	
	printf("Enter the Starting point. \n");
	scanf("%d",&iValue1);
	
	printf("Enter the Ending point. \n");
	scanf("%d",&iValue2);
	
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
	Range(p,iSize,iValue1,iValue2);
			
	free(p);
	
	return 0;
}