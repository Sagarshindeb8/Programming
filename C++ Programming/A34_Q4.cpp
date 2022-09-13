//LB Assignment no:34, Question no:4.
//Generic program to accept N values from user and return largest of that values.

#include <iostream>
using namespace std;

template <class T>
T Max(T *arr, int size)
{
	T large = arr[0];
	int i = 0;
	for(i=0;i<size;i++)
	if(arr[i]>large)
	{
		large = arr[i];
	}
	return large;
}

int main()
{
	int iSize = 5;
	int arr[] = {10,20,30,40,50};
	int iRet = Max(arr,iSize);
	printf("%d\n", iRet);
	
	iSize = 4;
	float brr[] = {10.0,3.7,9.8,8.7};
	float fRet = Max(brr,iSize);
	printf("%f\n", fRet);

	return 0;
}