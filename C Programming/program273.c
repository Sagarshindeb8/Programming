//Linked List Problems
//Addition of all the elements of Linked list singly linear ll.

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn -> data = no;
	newn -> next = NULL;
	
	if(*Head != NULL)
	{
		newn -> next = *Head;
	}	
	*Head = newn;	
}

void Display(PNODE Head)
{
	printf("Elements of the linked list are: \n");
	while(Head != NULL)
	{
		printf("|%d| -> ", Head -> data);
		Head = Head -> next;
	}
	printf("NULL\n");	
}

int Maximum(PNODE Head)
{
	int iMax = 0;
	if(Head != NULL)
	{
		iMax = (Head -> data);
	}
	
	while(Head != NULL)
	{
		if((Head -> data) > iMax)
		{
			iMax = (Head -> data);
		}
		Head = Head -> next;
	}
	return iMax;
}


int main()
{
	PNODE First = NULL;
	int iRet = 0;
	
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,90);
	InsertFirst(&First,20);
	InsertFirst(&First,10);

	Display(First);	
	
	iRet = Maximum(First);
	printf("The Maximum element in the linked list is: %d\n", iRet);
	
	return 0;
}