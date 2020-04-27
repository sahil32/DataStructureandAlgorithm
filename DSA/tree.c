#include<stdio.h>
#include<stdlib.h>
#define Size 20
int top;
struct Stack
{
    struct BinaryTreeNode *stack[Size];
}st;

top=-1;
void push(struct BinaryTreeNode *root)
{
    st.stack[++top]=root;
}
struct BinaryTreeNode *pop()
{
    struct BinaryTreeNode *temp;
    temp=st.Stack[top];
    --top;
    return temp;
}
int Isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
struct BinaryTreeNode *top()
{
	return Stack[top];
}
struct BinaryTreeNode
{
    struct BinaryTreeNode *left;
    int data;
    struct BinaryTreeNode *right;
}*root=NULL;
//traversing
//inorder with recursion
void Inorder(struct BinarytreeNode *root)
{
    if(root==NULL)
    {
        return;
    }
    Inorder(root->left);
    printf("%d/t",root->data);
    Inorder(root->right);
}
//inorder without recursion
void InorderWithoutRecursion(struct BinaryTreeNode *root)
{
    while(1)
    {
        while(root)
        {
            push(root);
            root=root->left;
        }
        if(Isempty())
            break;
        root=pop();
        printf("%d\t", root->data);
        root=root->right;
    }
}
//traversing in preorder recursive
void preorder(struct BinaryTreeNode *root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d/t",root->data);
    preorder(root->left);
    preorder(root->right);
}
//traversing preorder without recursion
void preorderWithoutRecursion(struct BinaryTreeNode *root)
{
    while(1)
    {
        while(root)
        {
            printf("%d/t",root->data);
            push(root);
            root=root->left;
        }
        if(Isempty())
            break;
        root=pop();
        root=root->right;
    }
}
//traversing postorder with recursion
void postorder(struct BinaryTreeNode *root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%d\t",root->data);
}
//traversing postorder without recursion 
void NonRecursivepostorder(struct BinaryTreeNode *root)
{
	while(1)
	{
		while(root)
		{
			push(root);
			root=root->left;
		}
		if(Isempty())
		{
			break;
		}
		root=top();
		if(root!=NULL&&root->right==NULL)
		{
			root=pop();
			printf(root->data);
			root=NULL;
		}
		else
		{
			root=root->right;
		}
	}
}

