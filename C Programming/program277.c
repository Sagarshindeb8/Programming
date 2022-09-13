//Linked List Problems
//Accept LL and display the addition of digits in the number from the linked list.

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

void SumDigits(PNODE Head)
{
	int iSum = 0, iNo = 0;
	
	while(Head != NULL)
	{
		iNo = Head -> data;
		
		while(iNo != 0)
		{
			iSum = iSum + (iNo % 10);
			iNo = iNo /10;
		}
		printf("%d: %d\n", Head -> data, iSum);
		iSum = 0;
		Head = Head -> next;
	}
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	int iValue = 0;
	
	InsertFirst(&First,61);
	InsertFirst(&First,28);
	InsertFirst(&First,496);
	InsertFirst(&First,24);
	InsertFirst(&First,22);
	
	Display(First);
	
	SumDigits(First);
	
	return 0;
}