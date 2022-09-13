//Strings (String Concatenate)
//Accept two strings from user and copy the contents of second string at the end of the first string. 

#include<iostream>
using namespace std;

void strcatX(char *src, char *dest)
{		
	while(*src != '\0')
	{
		src++;
	}
	
	while(*dest != '\0')
	{
		*src = *dest;
		src++;
		dest++;
	}
	*src = '\0';
}

int main()
{
	char Arr[20]; //Array with data
	char Brr[20]; //Array with data
	
	cout<<"Enter first string"<<endl;
	cin.getline(Arr,20);
	
	cout<<"Enter second string"<<endl;
	cin.getline(Brr,20);
	
	strcatX(Arr,Brr); 
	
	cout<<"String after concatenation: "<<Arr<<endl;
	
	return 0;
}