//Specific Programming, which will be converted to generic next.
//Using call by address

#include <iostream>
using namespace std;

void SwapA(int *p, int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
} 

int main()
{
	int No1 = 11;
	int No2 = 21;	
	
	cout<<"Before Swap data is: "<<No1<<" "<<No2<<endl;
	
	SwapA(&No1, &No2); //Call by address
	
	cout<<"After Swap data is: "<<No1<<" "<<No2<<endl;
	return 0;
}