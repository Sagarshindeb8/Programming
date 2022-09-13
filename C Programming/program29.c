//Accept no from user & display the Non-factors of that nos.

//Input: 10
//Output: 3 4 6 7 8 9 

//Input: 9
//Output: 2 4 5 6 7 8

#include<stdio.h>

void DisplayNonFactors(int iNo)
{	
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = - iNo;
	}
	
	for(iCnt=1;iCnt <iNo;iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	DisplayNonFactors(iValue);
	
	return 0;
}

// Time Complexity: O(N)