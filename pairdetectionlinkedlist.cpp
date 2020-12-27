//current program detects whether a pair of product exist in a linked list or not


#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
	}*start = NULL;
	int main()
	{
		struct node *newnode, *current;
		int a[]={1,2,3,4,5,6};
		for(int i=0;i<6;i++)
		{
			newnode = (struct node*) malloc(sizeof(struct node));
			newnode->data = a[i];
			newnode->next = NULL;
			if(start ==NULL)
			{
				start = newnode;
				current = start;
				}
				else{
					current->next = newnode;
					current =newnode;
					}
			}
		unordered_set<int> st;
		int target;cin>>target;
		struct node* ptr = start;
		while(ptr!=NULL)
		{
			int curr = ptr->data;
			if((target%curr==0)&&st.find(target/curr)!=st.end())
			{
				cout<<curr<<" "<<target/curr<<"\n";
				return 0;
				}
				st.insert(curr);
				ptr=ptr->next;
			}
			cout<<"not found\n";
		return 0;
		}
