//LB Assignment no:35, Question no:4.
//Generic program which accept N values and search last occurance of any specific value.
//Input: 10 20 30 10 30 40 10 40 10
//value to check frequency of 40.
//Output: 9


#include <iostream>
using namespace std;

template <class T>
int SearchLast(T *arr, int iSize, T no)
{
	int i = 0;
	int iCnt = 0;
	for(i=0;i<iSize;i++)
	{
		if(arr[i] == no)
		{
			iCnt = i;
		}
	}
	return i;
}

int main()
{
	int arr[] = {10,20,30,10,30,40,10,40,10};
	int iRet = SearchLast(arr,9,10);
	cout<<iRet;
	
	return 0;
}