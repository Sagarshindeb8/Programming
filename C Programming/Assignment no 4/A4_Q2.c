//Assignment no 4,Q2.Write a program to accept number from user and display its factors in decreasing order.
//Input: 12
//Output:6 4 3 2 1

#include<stdio.h>

int FactRev(int iNo)
{	
	int iCnt = 0;
	for(iCnt=(iNo/2);iCnt<(iNo);iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d",iCnt);
		}
	}
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	FactRev(iValue);
	
	return 0;
}
