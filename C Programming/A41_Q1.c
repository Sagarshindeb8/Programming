//LB Assignment no:41, Question no:1.
//Write application which accept file name from user
//and count no of capital characters from that file.
//Input: Demo.txt
//Output: Number of capital characters are 20.

#include <stdio.h>
#include<fcntl.h>

int CountCapital(char FName[])
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
	printf("File opened successfully\n");
	
	while( (iRet = read(fd,Data,sizeof(Data))) != 0)
	{
		for(iCnt=0;iCnt<=iRet;iCnt++)
		{
			if(Data[iCnt] >= 'A' && Data[iCnt]<='Z')
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
	
	iRet = CountCapital(FileName);
	printf("The number of capital characters in the file are:%d\n", iRet);
	
	return 0;
}