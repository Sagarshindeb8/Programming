//LB Assignment no:38, Question no:4.
//Write a recursive program which accept string from user and count number of characters.
//Input: 5
//Output: 120

#include <stdio.h>

int Fact(int iNo)
{
	if(iNo == 0)
	{
		return(1);
	}
	else
	{
		return (iNo*Fact(iNo-1));
	}
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet = Fact(iValue);
	
	printf("%d", iRet);
	
	return 0;
}