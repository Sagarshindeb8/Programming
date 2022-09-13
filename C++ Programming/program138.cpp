//Strings (Case in-sensitive vowel count)
//Accept string from user and count no of vowels (Capital & Small case) from string

#include<iostream>
using namespace std;

int CountVowel(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
		(*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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
	
	iRet = CountVowel(Arr); 
	cout<<"Number of Vowels in the String are: "<<iRet<<endl;
	
	return 0;
}