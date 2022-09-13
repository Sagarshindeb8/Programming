//Strings
//Accept string from user and toggle the case of that string.

#include<iostream>
using namespace std;

int strtoggleX(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		else if((*str >= 'a') && (*str <= 'z'))
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
	
	strtoggleX(Arr); 
	
	cout<<"The toggled String is: "<<Arr<<endl;
	
	return 0;
}