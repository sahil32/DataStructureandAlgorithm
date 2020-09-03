#include<bits/stdc++.h>
using namespace std;
#define ll long long
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int n;
	cin>>n;
	ll int num=INT_MIN;
	vector<int> vec(n);
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end());
	int a=n;
	for(int i=0;i<n;i++)
	{
		num=max(num,(a-i)*1ll*vec[i]);
	}
	cout<<num<<"\n";
	return 0;	
}
