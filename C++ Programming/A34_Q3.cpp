//LB Assignment no:34, Question no:3.
//Generic program to accept N values from user and return addition of hat values.

#include <iostream>
using namespace std;

template <class T>
T AddN(T *arr, T size)
{
	T sum = 0;
	int i = 0;
	for(i=0;i<size;i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}

int main()
{
	int arr[] = {10,20,30,40,50};
	int iSum = AddN(arr,5);
	printf("%d\n", iSum);
	
	float brr[] = {10.0,3.7,9.8,8.7};
	float fSum = AddN(brr,4.0f);
	printf("%f\n", fSum);

	return 0;
}