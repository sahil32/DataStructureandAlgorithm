#include<stdio.h>
struct node{
	int data;
	struct node *right;
	struct node *left;
};
struct Queue
{
	struct node* queue[1000];
	int front;
	int rear;
}q;
q.front=-1;
q.rear=-1;
void Enqueue(struct node* root)
{
	if(q.front==-1&&q.rear==-1)
	{
		q.front=q.rear=0;
	}
	else
		++q.rear;
	q.queue[q.rear]=root;
}
struct node* Dequeue()
{
	struct node *root;
	root=q.queue[q.front];
	if(q.rear==q.front)
	{
		q.rear=q.front=-1;
	}
	else
		++q.front; 
	return root;
}
int Isempty()
{
	if(q.front==-1&&q.rear==-1)
	{
		return 1;
	}
	else
	return 0;`
}
void LevelOrder(struct node *root)
{
	Enqueue(root);
	while(!Isempty())
	{
		root=Dequeue();
		printf("%d\t",root->data);
		if(root->left)
			Enqueue(root->left);
		if(root->right)
			Enqueue(root->right);
	}
}
int SizeofBinaryTree(struct node *root)
{
	if(root==NULL)
	return 0;
	Enqueue(root);
	int count=0;
	while(!Isempty())
	{
		root=Dequeue();
		count++;
		if(root->left)
		Enqueue(root->left);
		if(root->right)
		Enqueue(root->right);
	}
	return count;
}
int HeightofBinaryTree(struct node *root)
{
	
	if(root==NULL)
	return 0;
	Enqueue(root);
	Enqueue(NULL);
	int depth=0;
	while(!Isempty())
	{
		root=Dequeue();
		if(q.front==NULL)
		{
			++depth;
		}
		if(root->left)
		Enqueue(root->left);
		if(root->right)
		Enqueue(root->right);
	}
}
int main()
{
	struct node *root=NULL;
	int t;
	while(t-->0)
	{
		
	}
}


