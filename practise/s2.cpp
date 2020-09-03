#include<bits/stdc++.h>
using namespace std;
#define ll long long
int fact(int n)
{
	int fac=1;
	for(int i=1;i<=n;i++)
	{
		fac*=i;
	}
	return fac;
}
int main()
{
	ll int a,b;
	cin>>a>>b;
	cout<<fact(min(a,b))<<"\n";
	return 0;
}
