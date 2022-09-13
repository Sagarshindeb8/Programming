//File Handling
//Program to accept file name from user and count no. of small chars in that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h> 

int CountSmall(char Fname[])
{
	int fd = 0; 
	int iRet = 0; 
	char Data[10]; 
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
			if(Data[iCnt] >='a' && Data[iCnt]<='z')
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
	
	iRet = CountSmall(Fname);
	printf("Number of small characters in the file are: %d\n", iRet);
	
	return 0;
}