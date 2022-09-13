#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head, int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;	
	newn -> prev = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		newn -> next = *head;
		(*head) -> prev = newn;
		*head = newn;
	}	
}

void InsertLast(PPNODE head, int no)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;	
	newn -> prev = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		temp = *head;
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
		newn -> prev = temp;
	}	
}

void DeleteFirst(PPNODE head)
{
	PNODE temp = NULL;
	
	if(*head == NULL)
	{
		return;
	}
	else
	{
		temp = *head;
		*head = temp -> next;
		temp -> next -> prev = NULL;
		free(temp);
	}
}

void DeleteLast(PPNODE head)
{
	PNODE temp = NULL;
	
	if(*head == NULL)
	{
		return;
	}
	else
	{
		temp = *head;
		while(temp -> next -> next != NULL)
		{
			temp = temp -> next;
		}
		free(temp -> next);
		temp -> next = NULL;
	}
}

InssertAtPos(PPNODE head, int no, int pos)
{
	int size = 0;
	int iCnt = 0;
	PNODE newn = NULL;
	PNODE temp = NULL;
	size = Count(*head)
	if((pos<1)||(pos>(size+1)))
	{
		printf("Invalid position");
		return;
	}
	if(pos ==1)
	{
		InsertFirst(head,no);
	}
	else if(pos == (size+1))
	{
		InsertFirst(head,no);
	}
	else
	{	
		temp = *head;
		newn = (PNODE)malloc(sizeof(Node));
		newn - > data = no;
		newn - > next = NULL;
		newn - > prev = NULL;
		
		for(iCnt=1;iCnt=(pos-1);iCnt++)
		{
			temp = temp -> next;
		}
		newn -> next = temp -> next;
		temp -> next -> prev = newn;	//*
		temp -> next = newn;
		newn -> prev = temp;
	}
}

void Display(PNODE head)
{
	printf("The nodes are: ");
	while(head != NULL)
	{
		printf("|%d| -> ",head -> data);
		head = head -> next;
	}
	printf("NULL");
}

int Count(PNODE head)
{
	int iCnt = 0;
	while(head != NULL)
	{
		iCnt++;
		head = head -> next;
	}
	return iCnt;
}


int main()
{
	PNODE first = NULL;
	int ret = 0;
	
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	
	Display(first);
	ret = Count(first);
	printf("The number of nodes are: %d\n", ret);
	
	InsertLast(&first,151);
	Display(first);
	ret = Count(first);
	printf("The number of nodes are: %d\n", ret);
	
	DeleteFirst(&first);
	Display(first);
	ret = Count(first);
	printf("The number of nodes are: %d\n", ret);
	
	DeleteLast(&first);
	Display(first);
	ret = Count(first);
	printf("The number of nodes are: %d\n", ret);
	
}

