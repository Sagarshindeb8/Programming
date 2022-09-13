//LB Assignment no:34, Question no:5.
//Generic program to accept N values from user and return smallest of that values.

#include <iostream>
using namespace std;

template <class T>
T Min(T *arr, int size)
{
	T small = arr[0];
	int i = 0;
	for(i=0;i<size;i++)
	if(arr[i]<small)
	{
		small = arr[i];
	}
	return small;
}

int main()
{
	int iSize = 5;
	int arr[] = {10,20,30,40,50};
	int iRet = Min(arr,iSize);
	printf("%d\n", iRet);
	
	iSize = 4;
	float brr[] = {10.0,3.7,9.8,8.7};
	float fRet = Min(brr,iSize);
	printf("%f\n", fRet);

	return 0;
}