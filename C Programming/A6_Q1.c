//Assignment no: 6, Q1.
//Write a program which accepts number from user and displays its digit in reverse order.
//Input:2395, Output: 5932
#include<stdio.h>
void DisplayDigit(int iNo)
{
	int iDigit = 0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit= iNo % 10;
		printf("%d",iDigit);
		iNo = iNo / 10;
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter the number");
	scanf("%d",&iValue);
	
	DisplayDigit(iValue);
	
	return 0;
}

