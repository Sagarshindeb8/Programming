//Linked List Problems
//Accept SLL and delete the nodes with even data from the LL.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void DeleteEven(PPNODE Head)
{
    PNODE tempHead = *Head;

    if(*Head == NULL) //LL is empty
    {
        return;
    }

    while(tempHead != NULL)
    {
        tempHead = tempHead -> next;
    }
}

int main()
{
	PNODE First = NULL;

	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
    Display(First);

	return 0;
}