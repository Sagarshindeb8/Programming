//Input: 4
//Output: 1*2*3*4 = 24 or,
//Output: 4*3*2*1 = 24

#include<iostream>
using namespace std;

int Factorial(int iNo)
{
	int iFact = 1;
	int iCnt = 0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		//iFact = iFact * iCnt;
		iFact *= iCnt;
		
	}
	return iFact;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	cout<<"Enter the number\n";
	cin>>iValue;
	
	iRet = Factorial(iValue);
	cout<<"The factorial is: "<<iRet<<endl;	
	
	return 0;
}