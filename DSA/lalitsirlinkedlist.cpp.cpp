#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;
void CreateList()
{
	struct node *newnode,*current;
	char ch;
	do
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter Data Part:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(start==NULL)
		{
			start=newnode;
		}
		else
		{
			current->next=newnode;
		}
		current=newnode;
		printf("Do you want to add more node:");
		ch=getche();
	}while(ch=='y' || ch='Y');
}
void Display()
{
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void InsertionatFirst(int data)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Memory Error\n");
		return;		
	}
	newnode->data=data;
	newnode->next=start;
	start=newnode;
}
void InsertionatLast(int data)
{
	struct node *newnode,*ptr;
	newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("Memory Error\n");
		return;
	}
	newnode->data=data;
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;
		return;	
	}
	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=newnode;
}
void DeletionatFirst()
{
	struct node *ptr;
	
	if(start==NULL)
	{
		printf("Deletion Not Possible\n");
		return;	
	}	
	ptr=start;
	start=start->next;
	ptr->next=NULL;
	free(ptr);
}	
void DeletionatLast()
{
	struct node *ptr,*prev;
	if(start==NULL)
	{
		printf("Deletion Not Possible:");
		return;
	}
	if(start->next==NULL)
	{
		free(start);
		start=NULL;
		return;
	}
	ptr=start;
	while(ptr->next!=NULL)
	{
		prev=ptr;
		ptr=ptr->next;
	}
	free(ptr);
	prev->next=NULL;
}
void InsertionBeforeGivenData(int x,int y)
{
	struct node *newnode,*ptr,*prev;
	if(start==NULL)
	{
		printf("List is Empty");
		return;
	}
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=y;
	
	if(start->data==x)
	{
		newnode->next=start;
		start=newnode;
		return;
	}
	ptr=start;
	while(ptr!=NULL && ptr->data!=x)
	{
		prev=ptr;
		ptr=ptr->next;
	}
	if(ptr==NULL)
	{
		printf("Data %d is not found:\n",x);
	}
	else
	{
		prev->next=newnode;
		newnode->next=ptr;
	}
}
void InsertionAfterGivenData(int x,int y)
{
	struct node *ptr,newnode;
	if(start==NULL)
	{
		printf("List is Empty:\n");
		return;
	}
	ptr=start;
	while(ptr!=NULL && ptr->data!=x)
	{
		ptr=ptr->next;
	}
	if(ptr==NULL)
	{
		printf("Data Not Found");
		return;
	}
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=y;
	newnode->next=ptr->next;
	ptr->next=newnode;	
}
void DeletionAccordingGivenData(int x)
{
	struct node *ptr,*p;
	if(start==NULL)
	{
		printf("List is Empty");
		return;
	}
	if(start->data==x)
	{
		ptr=start;
		start=start->next;
		ptr->next=NULL;
		free(ptr);
		return;
	}
	ptr=start;
	while(ptr->next!=NULL && ptr->next->data!=x)
	ptr=ptr->next;
	if(ptr->next==NULL)
	{
		printf("Data %d not found",x);
	}
	else
	{
		p=ptr->next;
		ptr->next=ptr->next->next;
		p->next=NULL;
		free(p);
	}
}
void PrintReverse(struct node *ptr)
{
	if(ptr==NULL)
	return;
	
	PrintReverse(ptr->next);
	printf("%d\t",ptr->data);
}
void RemoveDuplicate()
{
	struct node *ptr1,*ptr2,*dup;
	ptr1=start;
	while(ptr1->next!=NULL)
	{
		ptr2=ptr1;
		while(ptr2->next!=NULL)
		{
			if(ptr1->data==ptr2->next->data)
			{
				dup=ptr2->next;
				ptr2->next=dup->next;
				dup->next=NULL;
				free(dup);
			}
			else
			{
				ptr2=ptr2->next;
			}
			
		}
		ptr1=ptr1->next;
	}
}
void MidNode()
{
	struct node *ptr1,*ptr2;
	if(start==NULL || start->next==NULL)
	return start;
	ptr1=ptr2=start;
	while(1)
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
		if(ptr2==NULL || ptr2->next==NULL)
		break;
	}
	return ptr1;
}

























