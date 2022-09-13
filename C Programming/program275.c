//Linked List Problems
//Accept LL and display the summanation of factors of each element separately.

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

void SumFactors(PNODE Head)
{
	int iNo = 0;
	int iSum = 0;
	int i = 0;

	while(Head != NULL)
	{
		//iNo = Head -> data;
		
		for(i=1, iSum=0, iNo=Head->data; i<=iNo/2; i++)
		{
			if(iNo % i == 0)
			{
				iSum = iSum + i;
			}
		}
		printf("%d : %d\n", Head -> data, iSum);
		//iSum = 0;
		Head = Head -> next;
	}
}


int main()
{
	PNODE First = NULL;
	int iRet = 0;
	int iValue = 0;
	
	InsertFirst(&First,50);
	InsertFirst(&First,20);
	InsertFirst(&First,38);
	InsertFirst(&First,24);
	InsertFirst(&First,10);
	
	Display(First);
	
	SumFactors(First);
	
	return 0;
}