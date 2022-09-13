#include<stdio.h>
#include<stdlib.h>

//structure declaration
struct node
{
	int data;			//4 bytes
	struct node*next;	//8 bytes (may be 4)
};

typedef struct node NODE;
typedef struct node *PNODE;

int main()
{	
	//Static memory allocation
	NODE obj;
	
	//Dynamic memory allocation
	NODE *ptr = (NODE *)malloc(sizeof(NODE));
	
	obj.data = 11;		//Direct accessing operator
	obj.next = NULL;
	
	ptr -> data = 11;	//Indirect accessing operator
	ptr -> next = NULL;
	
	
	return 0;
}