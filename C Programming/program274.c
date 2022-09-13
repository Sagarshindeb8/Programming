//Linked List Problems
//Accept LL and number and return the frequency of occurance.

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

int Frequency(PNODE Head, int iNo)
{
	int iCnt = 0;

	while(Head != NULL)
	{
		if((Head -> data) == iNo)
		{
			iCnt++;
		}
		Head = Head -> next;
	}
	return iCnt;
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
	
	printf("Enter the number to find the frequency: \n");
	scanf("%d", &iValue);		
	
	iRet = Frequency(First, iValue);
	printf("The Frequency of %d in the linked list is: %d\n", iValue, iRet);
	
	return 0;
}