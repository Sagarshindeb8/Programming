//LB Assignment no:21, Question no:5.
//Program which display largest digits of all elements of singly linear linked list.

//Input: 11 -> 250 -> 532 -> 419
//Output: 1 5 5 9

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

void DisplayLarge(PNODE Head)
{		
	int iDigit = 0;
	int iTemp = 0;

	while(Head != NULL)	
	{	iTemp = 0;
		while((Head -> Data) > 0)
		{			
			
			iDigit = (Head -> Data) % 10;
			if(iDigit>iTemp)
			{
				iTemp = iDigit;
			}	 
			(Head -> Data) = (Head -> Data) / 10;
		}
		printf("%d ->\t",iTemp);
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

	InsertFirst(&first,419);
	InsertFirst(&first,532);
	InsertFirst(&first,250);
	InsertFirst(&first,11);

	Display(first);

	DisplayLarge(first);
	
	return 0;
}