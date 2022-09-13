//Assignment no 3,Q3.Write a program which accept one number from user and print even factors of that number.
//Input: 36.
//Output: 2 6 12 18.

#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
	int i=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=(iNo-1);i++)
	{
		if(((i%2) ==0) && ((iNo%i)==0 ))
		{
			printf("%d",i);
		}
	}
}
int main()
{
	int iValue=0;
	printf("Enter number");
	scanf("%d",&iValue);
	DisplayEvenFactor(iValue);
	return 0;
}
