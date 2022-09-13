//LB Assignment no:41, Question no:3.
//Write application which accept file name from user
//and count no of white space characters from that file.
//Input: Demo.txt
//Output: Number of white space characters are 2.

#include <stdio.h>
#include<fcntl.h>

int CountWhite(char FName[])
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
			if(Data[iCnt] == ' ')
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
	
	printf("Enter the file name\n");
	scanf("%s", FileName);
	
	iRet = CountWhite(FileName);
	printf("The number of white space characters in the file are:%d\n", iRet);
	
	return 0;
}