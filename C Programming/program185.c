//File Handling
//Program to accept file name from user and count no. of white spaces chars in that file.
//Using user defined Macros.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h> 

#define FILESIZE 1024

int CountWhiteSpace(char Fname[])
{
	int fd = 0; 
	int iRet = 0; 
	char Data[FILESIZE]; 

	int iCnt = 0;
	int CountSpace = 0;
	
	fd = open(Fname, O_RDWR);	
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
			if(Data[iCnt] == ' ')
			{
				CountSpace++;
			}
		}
	}
	close(fd);		
	return CountSpace;
}

int main()
{
	char Fname[20]; 
	int iRet = 0; 
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	iRet = CountWhiteSpace(Fname);
	printf("Number of white space characters in the file are: %d\n", iRet);
	
	return 0;
}