//LB Assignment no:19, Question no:3.
//Program to search last occurance of a particular element from the singly linear linked list.
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

int Addition(PNODE Head)
{		
	int iSum = 0;
	while(Head != NULL)
	{				
			iSum = (iSum + (Head -> Data));				
			Head = Head-> next;
	}
	
			return iSum;
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

	InsertFirst(&first,10);
	InsertFirst(&first,20);
	InsertFirst(&first,30);
	InsertFirst(&first,40);

	Display(first);

	iRet = Addition(first);

	printf("The addition is: %d",iRet);
	
	return 0;
}