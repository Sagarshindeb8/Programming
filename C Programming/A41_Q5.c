//LB Assignment no:41, Question no:5.
//Write application which accept file name and one number from user
//and read that number of characters from starting position.
//Input: Demo.txt	5
//Output: Display first 5 characters from Demo.txt.

#include <stdio.h>
#include<fcntl.h>

void Display(char FName[], int iSize)
{
	int fd = 0;
	char Data[1024];
	int iRet = 0;
	int iCnt = 0;
	int Count = 0;
	
	fd = open(FName,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	lseek(fd,0,0);
	
	read(fd,Data,5);
	
	write(1,Data,5);
	
	close(fd);
}

int main()
{
	char FileName[30];
	int iValue = 0;	
	
	printf("Enter the file name\n");
	scanf("%s", FileName);
	
	printf("Enter the number of characters\n");
	scanf(" %[^'\n']d", &iValue);
	
	Display(FileName, iValue);
	
	return 0;
}