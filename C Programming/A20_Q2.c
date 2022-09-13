//LB Assignment no:20, Question no:2.
//Program which displays all elements which are prime from the singly linear linked list.
//Function should return position at which element is found.
//Input: 11 20 17 41 22 89
//Output:11 17 41 89
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
/* 
void DisplayPrime(PNODE Head) 
{ 
  int iCnt = 0;
  PNODE temp = Head; 
  while(Head != NULL) 
  { 
	  for(iCnt=0;iCnt<((Head->Data)/2);iCnt++)
	  {
	  	if(((Head->Data) % iCnt) != 0)
		  {
			  printf("%d",Head->Data);
		  }
	  }
		  Head = Head -> next; 
  }
}
*/
void DisplayPrime(PNODE Head)
{
	int iCnt = 0;
	PNODE temp = Head;
	printf("The Prime nodes are: \n");
	while(temp != NULL)
	{	
		for(iCnt=1;iCnt<((temp->Data));iCnt++)
	  	{	
	  		if((temp->Data) % iCnt == 0)
			{	
				printf("%d ->\t",temp -> Data);
				temp = temp -> next;
			}
		}
		
	}
	//printf("NULL\n");
	
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

	InsertFirst(&first,17);
	InsertFirst(&first,30);
	InsertFirst(&first,50);
	InsertFirst(&first,6);
	InsertFirst(&first,13);
	InsertFirst(&first,20);
	InsertFirst(&first,6);

	Display(first);

	
	DisplayPrime(first);
	
	return 0;
}