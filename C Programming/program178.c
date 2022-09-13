//File Handling
//Program to open existing file and write data into the file.
//Write data after / ahead of existing data in the file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h> 

int main()
{
	int fd = 0; 
	int iRet = 0; 
	char Fname[20]; 
	char Data[100]; 
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname, O_RDWR | O_APPEND);	 
	if(fd == -1)			
	{
		printf("Unable to open the file");
		return -1; 		
	}
	printf("File is successfully opened with FD %d\n", fd);

	printf("Enter the data that you want to write:\n");
	scanf(" %[^'\n']s",Data);
	
	iRet = write(fd,Data,strlen(Data));
	printf("%d bytes gets successfully written in the file\n", iRet);
	close(fd);
	
	return 0;
}