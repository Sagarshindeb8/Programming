//LB Assignment no:21, Question no:3.
//Program which display all product of all digits of all elements from singly linear linked list.
//0 not to be considered
//Input: 11 -> 20 -> 32 -> 41
//Output: 1  2  6  4

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

void DisplayProduct(PNODE Head)
{		
	int iDigit = 0;
	int iMult = 1;

	while(Head != NULL)	
	{	
		iMult = 1;
		while((Head -> Data) > 0)
		{			
			iDigit = (Head -> Data) % 10;
			if(iDigit == 0)
			{
				iDigit = 1;
			}
			iMult = iMult * iDigit;			
			(Head -> Data) = (Head -> Data) / 10;
		}
			printf("%d ->\t",iMult);
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

	InsertFirst(&first,41);
	InsertFirst(&first,32);
	InsertFirst(&first,20);
	InsertFirst(&first,11);

	Display(first);

	DisplayProduct(first);
	
	return 0;
}