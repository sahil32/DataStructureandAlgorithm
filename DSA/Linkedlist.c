#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
} *start=NULL;
void CreateList()
{
    struct node *newnode,*current;
    char ch;
    do
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("\nplease enter the data into newnode: ");
        scanf("\t%d",&newnode->data);
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
        printf("do you want to add more node?");
        ch=getche();
    }while (ch=='y'||ch=='Y');
}
void Display()
{
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("\t%d",ptr->data);
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
       printf("memory error\n");
       return;
   }
   newnode->next=start;
   newnode->data=data;
   start=newnode;
}
void InsertionatLast(int data)
{
    struct node *ptr, *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("memory error\n");
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
void DeleteatFirst()
{
    struct node *ptr;
    if(start==NULL)
    {
        printf("Linked list does not exist!");
        return;
    }
    ptr=start;
    start=start->next;
    ptr->next=NULL;
    free(ptr);
}
void DeleteatList()
{
    struct node *ptr, *prev;
    if(start==NULL)
    {
        printf("Linked list does not exist!");
        return;
    }
    ptr=start;
    if(start->next==NULL)
    {
        free(start);
        start = NULL;
        return;
    }
    while(ptr->next==NULL)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    prev->next=NULL;
    free(ptr);
}
void InsertionBeforeaGivenData(int x,int y)
{
    struct node *prev,*ptr,*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(start==NULL)
    {
        printf("linked list is empty");
        return;
    }
    ptr=start;
    newnode->data=y;
    while(ptr!=NULL&&ptr->data!=x)
    {
        prev=ptr;
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("data not found");
        return;
    }
    else
    {
        prev->next=newnode;
        newnode->next=ptr;
    }
}
void InsertionAfteraGivenData(int x,int y)
{
    struct node *ptr, *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(start==NULL)
    {
        printf("linked list not found\n");
        return;
    }
    ptr=start;
    while(ptr!=NULL&&ptr->data!=x)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("data not found :(\n");
        return;
    }
    newnode->data=y;
    newnode->next=ptr->next;
    ptr->next=newnode;
}
void ReversingLinkedList()
{
    struct node *ptr,*prev,*current;
    ptr=start;
    current=start;
    prev=start;
    while(ptr!=NULL)
    {
        ptr=current->next;
        if(current==start)
        {
            current->next=NULL;
        }
        else
        current->next=prev;
        prev=current;
        current=ptr;
    }
    start=prev;
    Display();
}
void merge_sorted_list(struct node *head1,struct node *head2)
{
    struct node *chead;
struct node *cptr;
if((head1->data)<=(head2->data))
{
    chead=head2;
    cptr=chead;
    head1=head1->next;
    chead->next=NULL;
}
else {
chead=head2;
cptr=chead;
head2=head2->next;
chead->next=NULL;
}
while(head1!=NULL||head2!=NULL)
{
    if(head1->data<=head2->data)
    {
        cptr->next=head1;
        head1=head1->next;
        cptr=cptr->next;
        cptr->next=NULL;
    }
    else {
    cptr->next=head2;
    head2=head2->next;
    cptr=cptr->next;
    cptr->next=NULL;
    }
}
if(head1!=NULL)
{
    cptr->next=head1;
}
else if(head2!=NULL)
{
    cptr->next=head2;
}

}
void main()
{
    CreateList();
    Display();


}

