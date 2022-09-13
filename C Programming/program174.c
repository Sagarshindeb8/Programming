//File Handling
//Take input name from user and create a file with that name.
//if 2nd scanf is not working use space in " %s".
//type command for windows - explore others.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> //Universal standard.
#include<fcntl.h>  //file control.h


int main()
{
	int fd = 0; 		//file descripter.
	char Fname[20]; 	// char array to accept file name.
	printf("Enter file name to create a new file\n");
	scanf("%s",Fname);
	
	fd = creat(Fname, 0777);	//(file_name, octal_num);
	if(fd == -1)			//Permissions:4-read, 2- write, 1-execute.(4+2+1=7)
	{						//o_owner_Group_Other(o for octal number sys)/		
		printf("Unable to create the new file");
		return -1; 		//failure.
	}
	
	printf("File is successfully created with FD %d\n", fd);
	
	return 0;
}