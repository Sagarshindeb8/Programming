//File Handling
//Program to accept file name from user and count no. of chars / find length of file in that file.
//or Program to display the selfcode.
//or Program your own cat command.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h> 

int FileLength(char Fname[])
{
	int fd = 0; 
	int iRet = 0; 
	char Data[10]; 
	int iSum = 0;
	
	fd = open(Fname, O_RDWR);	 
	if(fd == -1)			
	{
		printf("Unable to open the file");
		return -1; 		
	}
	printf("File is successfully opened with FD %d\n", fd);
	
	while( (iRet = read(fd,Data,sizeof(Data))) != 0 )
	{
		iSum = iSum + iRet;
	}
	close(fd);		
	return iSum;
}

int main()
{
	char Fname[20]; 
	int iRet = 0; 
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	iRet = FileLength(Fname);
	printf("The file lengthis: %d\n", iRet);
	
	return 0;
}