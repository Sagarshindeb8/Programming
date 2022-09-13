//Strings
//Accept string from user and convert the string from upper case to lower case

#include<iostream>
using namespace std;

int strlwrX(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strlwrX(Arr); 
	
	cout<<"The String in lower case: "<<Arr<<endl;
	
	return 0;
}