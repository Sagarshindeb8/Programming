//LB Assignment no:21, Question no:1.
//Program which reverses each element of singly linear linked list.

//Input: 11 -> 28 -> 17 -> 41 -> 6 -> 89
//Output: 11 -> 82 -> 71 -> 14 -> 6 -> 98

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

void Reverse(PNODE Head)
{		
	int iDigit = 0;
	int iRev = 0;

	while(Head != NULL)	
	{	
		iRev = 0;
		while((Head -> Data) > 0)
		{			
			iDigit = (Head -> Data) % 10;
			iRev = (iRev  * 10) + iDigit;			
			(Head -> Data) = (Head -> Data) / 10;
		}
		printf("%d ->\t",iRev);
		Head = Head -> next;
	}
	printf("NULL\n");	
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

	InsertFirst(&first,89);
	InsertFirst(&first,6);
	InsertFirst(&first,41);
	InsertFirst(&first,17);
	InsertFirst(&first,28);
	InsertFirst(&first,11);

	Display(first);

	Reverse(first);
	
	return 0;
}