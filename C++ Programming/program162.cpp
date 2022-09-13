//Generic Programming.
//Call by reference

#include <iostream>
using namespace std;

template <class T>
void SwapR(T &p, T &q)
{
	T temp;
	temp = p;
	p = q;
	q = temp;
} 

int main()
{
	//Int values
	int No1 = 11;
	int No2 = 21;		
	cout<<"Before Swap data is: "<<No1<<" "<<No2<<endl;	
	SwapR(No1, No2); //Call by reference	
	cout<<"After Swap data is: "<<No1<<" "<<No2<<endl;
	
	//float values
	float fNo1 = 11.1;
	float fNo2 = 21.2;
	cout<<"Before Swap data is: "<<fNo1<<" "<<fNo2<<endl;	
	SwapR(fNo1, fNo2); //Call by reference	
	cout<<"After Swap data is: "<<fNo1<<" "<<fNo2<<endl;
	
	//char values
	char cNo1 = 'A';
	char cNo2 = 'B';
	cout<<"Before Swap data is: "<<cNo1<<" "<<cNo2<<endl;	
	SwapR(cNo1, cNo2); //Call by reference	
	cout<<"After Swap data is: "<<cNo1<<" "<<cNo2<<endl;

	
	return 0;
}