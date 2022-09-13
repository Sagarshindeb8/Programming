//File Handling
//Program to accept file name from user and read/display all data from the file.
//or Program to display the selfcode.
//or Program your own cat command.

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
	char Data[10]; 
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname, O_RDWR);	 
	if(fd == -1)			
	{
		printf("Unable to open the file");
		return -1; 		
	}
	printf("File is successfully opened with FD %d\n", fd);
	/*
	read(fd,Data,sizeof(Data));
	read(fd,Data,sizeof(Data));
	read(fd,Data,sizeof(Data)); Each time 10 bytes of data will be read.
	*/
	
	//To read any number of data below while loop is used.
	while( (iRet = read(fd,Data,sizeof(Data))) != 0 )
	{
		write(1,Data,iRet);
	}
	close(fd);
	return 0;
}