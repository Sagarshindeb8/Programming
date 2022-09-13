//LB Assignment no:34, Question no:1.
//Generic program to multiply 2 numbers.

#include <iostream>
using namespace std;

template <class T>
T Multiply(T no1, T no2)
{
	T ans;
	ans = no1 * no2;
	return ans;
}

int main()
{
	int iRet = 0;
	iRet = Multiply(10,20);
	printf("%d", iRet);
	
	float fRet = 0;
	fRet = Multiply(10.0f,20.0f);
	printf("%f", fRet);

	return 0;
}