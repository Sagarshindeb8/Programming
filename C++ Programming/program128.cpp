//String travel using service function (Taking input from user)

#include<iostream>
using namespace std;

void Display(char str[])
{
	while(*str != '\0')
	{
		cout<<*str<<endl;
		str++;
	}		
}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	
	//scanf("%[^'\n']s", Arr); //cin>>Arr; & scanf("&s",Arr); - will give o/p only upto space
	cin.getline(Arr,20);
	
	Display(Arr); //Display(100);
	
	return 0;
}