//LB Assignment no:40, Question no:3.
//Write application which accept file name from user 
//and read all data from the file 
//and display contents on screen.
//Input: Demo.txt
//Output: Display all data of file.

#include <stdio.h>
#include<fcntl.h>

void ReadFile(char Src[])
{
	int fd = 0;
	int iRet = 0;
	char Data[1024];
	
	fd = open(Src,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return;
	}
	printf("File opened successfully\n");
	
	iRet = read(fd,Data,sizeof(Data));
	
	write(1,Data,iRet);
	
	
	close(fd);
}

int main()
{
	char Fname[20];
	
	printf("Enter the file name to create new file\n");
	scanf("%s", Fname);
	
	ReadFile(Fname);
	
	return 0;
}