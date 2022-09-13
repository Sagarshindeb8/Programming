//LB Assignment no:40, Question no:2.
//Write application which accept file name from user and create that file.
//Input: Demo.txt
//Output: File created successfully.

#include <stdio.h>
#include<fcntl.h>

void CreateFile(char Src[])
{
	int fd = 0;
	
	fd = creat(Src,0777);
	if(fd == -1)
	{
		printf("Unable to create file");
		return;
	}
	printf("File created successfully");
	close(fd);
}

int main()
{
	char Fname[20];
	
	printf("Enter the file name to create new file\n");
	scanf("%s", Fname);
	
	CreateFile(Fname);
	
	return 0;
}