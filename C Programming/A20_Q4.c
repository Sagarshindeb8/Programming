//LB Assignment no:19, Question no:4.
//Program to find the largest element from the singly linear linked list.
//Function should return position at which element is found.
//Input: 110 -> 230 -> 320 -> 240
//Output: 320

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

int Maximum(PNODE Head)
{		
	int iMax = 0;
	while(Head != NULL)
	{		
		if((Head -> Data) > iMax)		
			{
				iMax = Head -> Data;
				
			}			
			Head = Head-> next;
	}
	
			return iMax;
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

	InsertFirst(&first,240);
	InsertFirst(&first,320);
	InsertFirst(&first,230);
	InsertFirst(&first,110);

	Display(first);

	iRet = Maximum(first);

	printf("The Largest number is: %d",iRet);
	
	return 0;
}