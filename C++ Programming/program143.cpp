//Strings (Copy String)
//Accept string from user and copy that string in other string. 

#include<iostream>
using namespace std;

void strcpyX(char *src, char *dest)
{		
	while(*src != '\0')
	{
		*dest == *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20]; //Array with data
	char Brr[20]; //Empty Array
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strcpyX(Arr,Brr); 
	
	cout<<"String after copy: "<<Arr<<endl;
	
	return 0;
}