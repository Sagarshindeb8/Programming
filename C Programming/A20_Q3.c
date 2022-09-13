//LB Assignment no:20, Question no:3.
//Program which displays all elements which are perfect from the singly linear linked list.
//Function should return position at which element is found.
//Input: 11 -> 20 -> 32 -> 41
//Output: 52

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

int AdditionEven(PNODE Head)
{		
	int iSum = 0;
	int iCnt = 1;
	while(Head != NULL)	
	{		
			if(((Head -> Data) / 2) == 0)
			{
				iSum = iSum + (Head -> Data);
			}					
		Head = Head -> next;
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

	InsertFirst(&first,41);
	InsertFirst(&first,32);
	InsertFirst(&first,20);
	InsertFirst(&first,11);

	Display(first);

	iRet = AdditionEven(first);
	printf("%d ->\t",iRet);
	
	return 0;
}