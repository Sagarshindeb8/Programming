//Linked List Problems
//Accept LL and number and return the First occurance of that number in the LL.

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

int SearchFirstOccurance(PNODE Head, int iNo)
{
	int iPos = 1;

	while(Head != NULL)
	{
		if((Head -> data) == iNo)
		{
			break;
		}
		iPos++;
		Head = Head -> next;
	}
	if(Head == NULL)
	{
		return -1;
	}
	else
	{
		return iPos;
	}
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
	
	printf("Enter the number to find the Occurance: \n");
	scanf("%d", &iValue);		
	
	iRet = SearchFirstOccurance(First, iValue);
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