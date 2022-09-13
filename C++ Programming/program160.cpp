//Specific Programming, which will be converted to generic next.
//Using call by reference

#include <iostream>
using namespace std;

void SwapR(int &p, int &q)
{
	int temp;
	temp = p;
	p = q;
	q = temp;
} 

int main()
{
	int No1 = 11;
	int No2 = 21;	
	
	cout<<"Before Swap data is: "<<No1<<" "<<No2<<endl;
	
	SwapR(No1, No2); //Call by reference
	
	cout<<"After Swap data is: "<<No1<<" "<<No2<<endl;
	return 0;
}