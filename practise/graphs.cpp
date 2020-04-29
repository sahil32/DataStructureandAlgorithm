#include<bits/stdc++.h>
using namespace std;

/*
//adjecency list representation structure basic intuvitive representation
class Node{
	public:
	int data;
	Node *next;
	//Node arr[size];
	Node(int n)
	{
		data=n;
		next=NULL;
	}
};

int main()
{
	Node *arr[20];
	int n;
	for(int i=0;i<=5;i++)
	{
		cin>>n;
		Node* newnode= new Node(n);
		arr[i]=newnode;
	}
	//each vertex's head's array
	for(int i=0;i<=5;i++)
	{
		cout<<arr[i]->data<<"\t";
	}
	//apply linked list on array arr[i] 
	
	
	
	return 0;
}*/

void addEdge(vector<int> adj[],int u,int v)
{
	adj[v].push_back(u);
	adj[u].push_back(v);
}
void PrintGraph(vector<int> adj[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<i<<"->";
		for(auto it=adj[i].begin();it!=adj[i].end();it++)
		{
			cout<<(*it)<<"->";
		}
		cout<<"\n";
	}	
} 

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int E,V;
		cin>>V>>E;
		vector<int> adj[V];
		int u,v;
		int temp=E;
		while(E--)
		{
			cin>>u>>v;
			addEdge(adj,u,v);
		}
		PrintGraph(adj,temp);
	}
	return 0;
}

