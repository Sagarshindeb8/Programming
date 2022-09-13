//Linked List Problems
//Accept LL and number and return the element which is at the center of the LL.

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

int MiddleElement(PNODE Head)
{
	int iSize = 0, i = 0;
	PNODE temp = Head;

	while(Head != NULL)
	{
		iSize++;
		Head = Head -> next;
	}
	
	Head = temp;
	for(i=0; i< iSize/2; i++)
	{
		Head = Head -> next;
	}
	
	return Head -> next;
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	int iValue = 0;
	
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,90);
	InsertFirst(&First,90);
	InsertFirst(&First,10);
	
	Display(First);
	
	iRet = MiddleElement(First);
	if(iRet == -1)
	{
		printf("There is no such element in the Linked list");
	}
	else
	{
		printf("Element is present at position: %d\n", iRet);
	}
	
	return 0;
}