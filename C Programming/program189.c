//File Handling
//Program to accept existing file name from user, 
//Read data from 10th char in the file.
//Using lseek function

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdbool.h>
#include<string.h>

int main()
{
	char Fname[20];
	char Data[10];
	int fd = 0;
	
	printf("Enter the file name\n");
	scanf("%s", Fname);
	
	fd = open(Fname, O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	lseek(fd,10,0);
	
	read(fd,Data,5);
	
	write(1,Data,5);
	
	return 0;
}