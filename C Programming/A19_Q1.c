//LB Assignment no:19, Question no:1.
//Program to search first occurance of a particular element from the singly linear linked list.
//Function should return position at which element is found.
//Input: Row: 4 Cloumn: 4
//Output:
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
	int Data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int SearchFirstOcc(PNODE Head, int no)
{	
	int iCnt = 1;
	PNODE temp = NULL;
	temp = Head;
	while(Head != NULL)
	{	
		if(temp -> Data == no)
		{	
			
			break;
		}			
			iCnt++;
			temp = temp-> next;
	}
			return iCnt;
}

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));
	newn -> next = NULL;
	newn -> Data = no;

	if (*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn -> next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{
	int iCnt = 0;
	printf("The nodes are: \n");
	while(Head != NULL)
	{
		iCnt++;
		printf("%d ->\t",Head -> Data);
		Head = Head -> next;
	}
	printf("NULL\n");
	
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	int value = 0;

	InsertFirst(&first,70);
	InsertFirst(&first,30);
	InsertFirst(&first,50);
	InsertFirst(&first,40);
	InsertFirst(&first,30);
	InsertFirst(&first,20);
	InsertFirst(&first,10);

	Display(first);

	printf("Enter the value to search: \n");
	scanf("%d",&value);

	iRet = SearchFirstOcc(first,value);
	if(iRet == -1)
	{
		printf("The element is not present in the linked list");
	}
	else
	{
		
		printf("The element is at node: %d", iRet);
	}

	
	return 0;
}