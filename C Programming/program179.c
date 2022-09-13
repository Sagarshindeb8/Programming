//File Handling
//Program to open existing file and read data from the file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h> 

//Line no.38:
// 0 STDIN Keyboard
// 1 STDOUT Monitor
// 2 STDERR Monitor

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

	
	iRet = read(fd,Data,10);
	printf("%d bytes gets successfully read from the file\n", iRet);
	
	printf("Data from the file is %s\n", Data);
	printf("Data from the file is\n");
	write(1,Data,iRet); // 1 - file descripter = display on monitor
	close(fd);
	
	return 0;
}