//LB Assignment no:20, Question no:1.
//Program which displays all elements which are perfect from the singly linear linked list.
//Function should return position at which element is found.
//Input: 11 -> 28 -> 17 -> 41 -> 6 -> 89
//Output: 6  28

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

int DisplayPerfect(PNODE Head)
{		
	int iSum = 0;
	int iCnt = 0;
	PNODE temp = Head;
	while(temp != NULL)	
	{	
		for(iCnt=1;iCnt<=((temp->Data)/2);iCnt++)		
		{
			if((temp->Data)%iCnt == 0)
			{
				iSum = iSum + iCnt;
			}
			if(iSum>(temp->Data))
			{
			
				temp = temp -> next;
			}
			
		}
	
		if(iSum == (temp->Data))
		{
			return temp->Data;
			//printf("%d",iSum);					
		}		
		temp = temp -> next;
	}
	
		
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
	InsertFirst(&first,28);

	Display(first);

	iRet = DisplayPerfect(first);
	printf("%d ->\t",iRet);
	
	return 0;
}