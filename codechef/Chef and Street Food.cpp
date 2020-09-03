#include<iostream>
#include<limits>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m;
	cin>>m;
	int s[m],p[m],v[m];
	for(int i=0;i<m;i++)
	{
		cin>>s[i]>>p[i]>>v[i];
	}
	int profit,maxprofit=INT_MIN;
	for(int j=0;j<m;j++)
	{
		profit=p[j]/(s[j]+1)*v[j];
		maxprofit=max(maxprofit,profit);
	}
	cout<<maxprofit<<"\n";
	}
	return 0;
}
