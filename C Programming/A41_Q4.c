//LB Assignment no:41, Question no:4.
//Write application which accept file name and one character from user
//and count no of occurances of that characters from that file.
//Input: Demo.txt	'M'
//Output: Frequency of M is 3.

#include <stdio.h>
#include<fcntl.h>

int CountChar(char FName[], char ch)
{
	int fd = 0;
	char Data[1024];
	int iRet = 0;
	int iCnt = 0;
	int Count = 0;
	
	fd = open(FName,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	while( (iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		for(iCnt=0;iCnt<=iRet;iCnt++)
		{
			if(Data[iCnt] == 'M')
			{
				Count++;
			}
		}
	}
	close(fd);
	return Count;
}

int main()
{
	char FileName[30];
	int iRet = 0;
	char cValue;
	
	printf("Enter the file name\n");
	scanf("%s", FileName);
	
	printf("Enter the character\n");
	scanf("%c", &cValue);
	
	iRet = CountChar(FileName, cValue);
	printf("The frequency is:%d\n", iRet);
	
	return 0;
}