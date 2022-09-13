//Generic Programming - Maximum.
//Function template - used for functions

#include <iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int size)
{
	int i = 0;
	T Max = Arr[0];
	for(i=0;i<size;i++)
	{
		if(Arr[i] > Max)
		{
			Max = Arr[i];
		}			
	}	
	return Max;
}

int main()
{
	int iRet;
	int Arr[] = {10,20,30,40,50};
	iRet = Maximum(Arr,5);
	cout<<"Maximum is: "<<iRet<<endl;
	
	float fRet;
	float Brr[] = {10.20,20.22,30.33,40.44,50.55};
	fRet = Maximum(Brr,5);
	cout<<"Maximum is: "<<fRet<<endl;
	
	char cRet;
	char Crr[] = {'A','B','C','D','E'};
	cRet = Maximum(Crr,5);
	cout<<"Maximum is: "<<cRet<<endl;
	
	return 0;
}