//Generic Programming - Addition of two numbers.

#include <iostream>
using namespace std;

template<class T>
void Display(T Arr[], int size)
{
	int i = 0;
	for(i=0;i<size;i++)
	{
		cout<<Arr[i]<<endl;
	}
}

int main()
{
	int Arr[] = {10,20,30,40,50};
	Display(Arr,5);
	
	float Brr[] = {10.20,20.22,30.33,40.44,50.55};
	Display(Brr,5);
	
	char Crr[] = {'A','B','C','D','E'};
	Display(Crr,5);
	
	return 0;
}