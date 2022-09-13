//Strings
//Accept string from user and convert the string from lower case to upper case

#include<iostream>
using namespace std;

int struprX(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	struprX(Arr); 
	
	cout<<"The String in Upper case: "<<Arr<<endl;
	
	return 0;
}