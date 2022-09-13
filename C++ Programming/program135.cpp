//Strings using ASCII values
//Accept string from user and count no of small characters from string(using ASCII values)

#include<iostream>
using namespace std;

int CountSmall(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 97) && (*str <= 122))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	iRet = CountSmall(Arr); 
	cout<<"Number of small letters in the String are: "<<iRet<<endl;
	
	return 0;
}