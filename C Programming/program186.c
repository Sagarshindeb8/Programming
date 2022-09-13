//File Handling
//Program to accept two file names from user, 
//one which is existing file and one file is new.
//Copy the contents of one file to the other file.

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

#define FILESIZE 1024

void FileCopy(char Source[], char Destination[])
{
	int Fdsrc = 0;
	int Fddest = 0;
	int iRet = 0;
	char Buffer[FILESIZE]; 
	
	Fdsrc = open(Source, O_RDONLY);
	if(Fdsrc == -1)
	{
		printf("Unable to open the source file\n");
		return;
	}
	
	Fddest = creat(Destination, 07777);
	if(Fddest == -1)
	{
		printf("Unable to create new file\n");
		return;
	}
	
	while((iRet = read(Fdsrc,Buffer,FILESIZE)) != 0)
	{
		write(Fddest,Buffer,iRet);
	}
	close(Fdsrc);
	close(Fddest);
}

int main()
{
	char Fname1[20];
	char Fname2[20];
	
	printf("Enter the file name which contains the data\n");
	scanf("%s", Fname1);
	
	printf("Enter the file name which you want to create\n");
	scanf("%s", Fname2);
	
	FileCopy(Fname1,Fname2);
	
	return 0;
}