#include<bits/stdc++.h>
using namespace std;
/*#include<stdio.h>
struct item
{
	int element;
	int priority;
}pq;
int main()
{
	struct item arr[10];
	int elem;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&(arr[i].element));
		scanf("%d",&(arr[i].priority));
	}
	printf("enter the element to check for priority: ");
	scanf("%d",&elem);
	for(int j=0;j<10;j++)
	{
		if(arr[j].element==elem)
		{
			printf("priority is :-%d",arr[j].priority);
		}
	}
	return 0;
}


this is tradition approach */


//Mordern STL approach
void showpq(priority_queue <int> gq) 
{ 
    priority_queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.top(); 
        g.pop(); 
    } 
    cout << '\n'; 
} 
int main()
{
	priority_queue<int> pq;
	pq.push(10);
	pq.push(54);
	pq.push(35);
	pq.push(2115);
	pq.push(548);
	pq.push(10465);
	pq.push(24);
	pq.push(3487);
	showpq(pq); 
	return 0;
}
