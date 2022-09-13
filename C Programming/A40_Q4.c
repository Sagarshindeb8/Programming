//LB Assignment no:40, Question no:4.
//Write application which accept file name from user 
//and display size of the file.
//Input: Demo.txt
//Output: File size is 11 bytes.

#include <stdio.h>
#include<fcntl.h>

void FileSize(char Src[])
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
	printf("Size of the file is: %d\n",iRet);
	
	
	close(fd);
}

int main()
{
	char Fname[20];
	
	printf("Enter the file name to find the size\n");
	scanf("%s", Fname);
	
	FileSize(Fname);
	
	return 0;
}