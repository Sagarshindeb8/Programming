//File Handling
//Take input name from user and create a file with that name.
//Also write some data in the file using CUI.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> //Universal standard.
#include<fcntl.h>  //file control.h
#include<string.h>  


int main()
{
	int fd = 0; 
	char Data[100];	
	char Fname[20]; 
	
	printf("Enter file name to create a new file\n");
	scanf("%s",Fname);
	
	printf("Enter the data that you want to write in the file\n");
	scanf(" %[^'\n']s",Data);
	
	fd = creat(Fname, 0777);	
	if(fd == -1)			
	{
		printf("Unable to create the new file");
		return -1; 		
	}
	
	printf("File is successfully created with FD %d\n", fd);
	
	write(fd,Data,strlen(Data));
	
	return 0;
}