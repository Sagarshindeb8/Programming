//File Handling
//Program to accept file name from user and count no. of capital chars in that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h> 

int CountCapital(char Fname[])
{
	int fd = 0; 
	int iRet = 0; 
	//char Data[10]; 
	char Data[1024]; //Maximum throughput in min hardware movement.(Read max possible no of bytes (1 byte) at a time)

	int iCnt = 0;
	int CharCount = 0;
	
	fd = open(Fname, O_RDWR);	//O_RDONLY can be used. 
	if(fd == -1)			
	{
		printf("Unable to open the file");
		return -1; 		
	}
	printf("File is successfully opened with FD %d\n", fd);
	
	while( (iRet = read(fd,Data,sizeof(Data))) != 0 )
	{
		for(iCnt=0;iCnt<=iRet;iCnt++)
		{
			if(Data[iCnt] >='A' && Data[iCnt]<='Z')
			{
				CharCount++;
			}
		}
	}
	close(fd);		
	return CharCount;
}

int main()
{
	char Fname[20]; 
	int iRet = 0; 
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	iRet = CountCapital(Fname);
	printf("Number of capital characters in the file are: %d\n", iRet);
	
	return 0;
}