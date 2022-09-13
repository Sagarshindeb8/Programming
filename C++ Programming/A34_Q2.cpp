//LB Assignment no:34, Question no:2.
//Generic program to find the largest number in 3 given numbers.

#include <iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
	if((no1>no2) && (no1>no3))
	{
		return no1;
	}
	if((no2>no1) && (no2>no3))
	{
		return no2;
	}
	if((no3>no2) && (no3>no1))
	{
	return no3;
	}
}

int main()
{
	int iRet = 0;
	iRet = Max(10,20,30);
	printf("%d", iRet);
	
	float fRet = 0;
	fRet = Max(10.0f,20.0f, 30.0f);
	printf("%f", fRet);

	return 0;
}