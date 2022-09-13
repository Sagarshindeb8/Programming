//LB Assignment no:40, Question no:1.
//Write application which accept file name from user and open that file in read mode.
//Input: Demo.txt
//Output: File opened successfully.

#include <stdio.h>
#include<fcntl.h>

void OpenFile(char Src[])
{
	int fd = 0;
	
	fd = open(Src,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file");
		return;
	}
	printf("File opened successfully");
	close(fd);
}

int main()
{
	char Fname[20];
	
	printf("Enter the file name to open\n");
	scanf("%s", Fname);
	
	OpenFile(Fname);
	
	return 0;
}