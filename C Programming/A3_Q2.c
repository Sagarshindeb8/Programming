//Assignment no 3,Q2.Write a program which accept one number from user and print even factors of that number.
//Input: 24.
//Output: 1 2 4 6 8 10 12.

#include<stdio.h>
void DisplayFactor(int iNo)
{
	int i = 0;
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	for(i=1;i<=(iNo/2);i++)
	{
		if((i % 2)== 0)
		{
			printf("%d",i);
		}
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	DisplayFactor(iValue);
	return 0;
}