//introduction of circular array 
#include<iostream>
using namespace std;
void find (int a[],int n, int start)
{
		for(int i=start; i<n+start;i++)
		cout<<a[(i%n)]<<" "; 
	}
int main()
{
	int a[]={3,4,6,2,1};
	int m=sizeof(a)/sizeof(a[0]);
	find(a,m,49);
	return 0;
	}

