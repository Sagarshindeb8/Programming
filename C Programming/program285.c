//Trees - BST

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head, int iNo)
{
	PNODE temp = *Head;
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->data = iNo;
	newn->lchild = NULL;
	newn->rchild = NULL;
	
	if(*Head == NULL) //BST empty
	{
		*Head = newn;
	}
	else
	{
		while(1)
		{
			if(iNo>temp->data) //R
			{
				if(temp->rchild == NULL)
				{
					temp->rchild = newn;
					break;
				}
				temp = temp->rchild;
			}
			else if(iNo<temp->data) //L
			{
				if(temp->lchild == NULL)
				{
					temp->lchild = newn;
					break;
				}
				temp = temp->lchild;
			}
			else if(iNo == temp->data)
			{
				free(newn0;
				printf("Data is already there in BST");
				break;
			}
		}
	}
}

int main()
{
	PNODE First = NULL;
	
	Insert(&First,11);
	Insert(&First,21);
	Insert(&First,7);
	
	return 0;
}