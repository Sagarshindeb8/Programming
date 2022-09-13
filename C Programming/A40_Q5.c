//LB Assignment no:40, Question no:5.
//Write application which accept file name from user 
//and one string from user, write that string at the end of file.
//Input: Demo.txt
//Output: Write Hello World at the end of Demo.txt file.

#include <stdio.h>
#include<fcntl.h>
#include<string.h>

void FileSize(char Src[], char str[])
{
	int fd = 0;
	int iRet = 0;
	char Data[1024];
	
	fd = open(Src,O_RDWR | O_APPEND);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return;
	}	
	
	iRet = write(fd,str,strlen(str));
	printf("Data written in file successfully\n");
	
	close(fd);
}

int main()
{
	char Fname[20];
	char str[20];
	
	printf("Enter the file name to open\n");
	scanf("%s", Fname);
	
	printf("Enter the string to write in the file\n");
	scanf(" %[^'\n']s", str);
	
	FileSize(Fname, str);
	
	return 0;
}