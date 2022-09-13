//LB Assignment no:35, Question no:5.
//Generic program which accept N values and search last occurance of any specific value.
//Input:  10 20 30 10 30 40 10 40 10
//Output: 10 40 10 40 30 10 30 20 10

#include <iostream>
using namespace std;

template <class T>
int Reverse(T *arr, int iSize)
{
	int i = 0;
	for(i=iSize;i>=0;i--)
	{
		return arr[i];		
	}		
}

int main()
{
	int arr[] = {10,20,30,10,30,40,10,40,10};
	cout<<"Original Array:"<<endl;
	for(int i=0;i<9;i++)
	{
		cout<<arr[i];
	}
	Reverse(arr,9);
	cout<<"New Array:"<<endl;
		for(int i=9;i>=0;i--)
	{
		cout<<arr[i];
	}
	
	return 0;
}