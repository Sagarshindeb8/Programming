//Data structure - Singly Linear LL using template

#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
};

template<class T>
class SinglyLL
{
	public:
		struct node<T> *Head;
		int Count;
		
		SinglyLL();
		void InsertFirst(T no); //InsertFirst(int no)
		void InsertLast(T no);
		void Display();
		int CountNode();
		void DeleteFirst();
		void DeleteLast();
		void InserAtPos(T no, int pos);
		void DeleteAtPos(int pos);		
};

template<class T>
SinglyLL<T>::SinglyLL()
{
	Head = NULL;
	Count = 0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
	struct node<T> *newn = NULL;	
	newn = new node<T>;
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		newn -> next = Head;
		Head = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T no)
{
	struct node<T> *newn = NULL;	
	newn = new node<T>;
	
	newn -> data =no;
	newn -> next = NULL;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		struct node<T> *temp = Head;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::Display()
{
	cout<<"Elements in Linked List are"<<endl;
	struct node<T> *temp = Head;
	while(temp != NULL)
	{
		cout<<temp -> data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
	
}

template<class T>
int SinglyLL<T>::CountNode()
{
	return Count;	
}

template<class T>
void SinglyLL<T>::DeleteFirst()
{
	//struct node<T> *temp = NULL;
	if(Head == NULL)
	{
		return;
	}
	else
	{
		struct node<T> *temp = Head;
		Head = temp -> next;
		free(temp);
	}
	Count--;
}

template<class T>
void SinglyLL<T>::DeleteLast()
{
	if(Head == NULL)
	{
		return;
	}
	else if(Head -> next == NULL)
	{
		free(Head);
		Head = NULL;
	}
	else
	{
		struct node<T> *temp = Head;
		while(temp -> next -> next != NULL)
		{
			temp = temp -> next;
		}
		free(temp -> next);
		temp -> next = NULL;
	}
	Count--;
}

template<class T>
void SinglyLL<T>::InserAtPos(T no, int pos)
{
	int iCnt = 0;
	struct node<T> *newn = NULL;
	
	if((pos<1) || (pos > Count+1))
	{
		cout<<"Invalid Position";
		return;
	}
	if(pos == 1)
	{
		InsertFirst(no);
	}
	else if(pos == (Count+1))
	{
		InsertLast(no);
	}
	else
	{
		newn = new node<T>;
		
		newn -> data = no;
		newn -> next = NULL;
		
		struct node<T> *temp = Head;
		for(iCnt=1;iCnt<(pos-1);iCnt++)
		{
			temp = temp -> next;
		}
		newn -> next = temp -> next;
		temp -> next = newn;
		Count++;
	}	
}

template<class T>
void SinglyLL<T>::DeleteAtPos(int pos)
{
	int iCnt = 0;
	struct node<T> *tempdelete = NULL;
	
	if((pos<1) || (pos > Count))
	{
		cout<<"Invalid Position";
		return;
	}
	else if(pos ==1)
	{
		DeleteFirst();
	}
	else if(pos == Count)
	{
		DeleteLast();
	}
	else
	{
		struct node<T> *temp = Head;
		for(iCnt=1;iCnt<(pos-1);iCnt++)
		{
			temp = temp -> next;
		}
		tempdelete = temp -> next;
		temp -> next = temp -> next -> next;
		free(tempdelete);	
		Count--;
	}	
}

int main()
{	
	
/*
	SinglyLL<int>obj1;		//int LL
	obj1.InsertFirst(21);
	obj1.InsertFirst(11);
	obj1.InsertLast(51);
	obj1.InsertLast(101);
	obj1.DeleteFirst();
	obj1.InserAtPos(75,3);
	obj1.DeleteLast();
	obj1.DeleteAtPos(3);
	
	obj1.Display();
	cout<<"Number of nodes are: "<<obj1.CountNode()<<endl;
	
	SinglyLL<float>obj2;	//float LL
	obj2.InsertFirst(21.75);
	obj2.InsertFirst(11.89);
	obj2.InsertLast(51.36);
	obj2.InsertLast(101.28);
	obj2.InserAtPos(75.64,3);
	obj2.DeleteFirst();
	obj2.DeleteLast();
	obj2.DeleteAtPos(3);

	obj2.Display();
	cout<<"Number of nodes are: "<<obj2.CountNode()<<endl;
	
	SinglyLL<char>obj3;		//char LL
	obj3.InsertFirst('B');
	obj3.InsertFirst('A');
	obj3.InsertLast('C');
	obj3.InsertLast('D');
	obj3.DeleteFirst();
	obj3.InserAtPos('S',3);
	obj3.DeleteLast();
	obj3.DeleteAtPos(3);
	
	obj3.Display();
	cout<<"Number of nodes are: "<<obj3.CountNode()<<endl;
*/
	return 0;
}