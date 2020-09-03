#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int arr1[26]={0};
		int arr2[26]={0};
		int len=s.length();
		for(int i=0;i<len/2;i++)
		{
			int index=s[i]-'a';
			arr1[index]++;
		}
		for(int j=(len+1)/2;j<len;j++)
		{
			int index=s[j]-'a';
			arr2[index]++;
		}
		int flag=0;
		for(int i=0;i<26;i++)
		{
			if(arr1[i]!=arr2[i])
			{
				flag=1;
			}
		}
		if(flag==1)
		{
			cout<<"NO"<<"\n";
		}
		else cout<<"YES"<<"\n";
	}
	return 0;
}
