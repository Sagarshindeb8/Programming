//OOP - better
//Input: 4
//Output: 1*2*3*4 = 24 or,
//Output: 4*3*2*1 = 24

#include<iostream>
using namespace std;

class Number
{	
	private:
		int iNo; //Characteristics
		
	public:
		void Accept()	//Setter
		{
			cout<<"Enter the value: "<<endl;
			cin>>this -> iNo;
		}
		
		void Display()	//Getter
		{
			cout<<"Value is: "<<this -> iNo<<endl;
		}
		
		int Factorial()
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
};

int main()
{
	Number nobj;
	int iRet = 0;
	
	nobj.Accept();
	nobj.Display();	
		
	iRet = nobj.Factorial();
	cout<<"The factorial is: "<<iRet<<endl;	
	
	return 0;
}