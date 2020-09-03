#include<bits/stdc++.h>
using namespace std;
int SubsetSum(int set[],int n,int sum)
{
	int T[n+1][sum+1];
	for(int i=0;i<=n;i++)
	{
		T[i][0]=1;
	}
	for(int j=1;j<=sum;j++)
	{
		T[0][j]=0;
	}
	for(int j=1;j<=n;j++)
	{
		for(int k=1;k<=sum;k++)
		{
			if(set[j-1]>k)
			T[j][k]=T[j-1][k];
			else
			T[j][k]=T[j-1][k]||T[j-1][k-set[j-1]];
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
		{
			cout<<T[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
int main()
{
	int set[]={3, 4, 5, 2};
	int sum=6;
	int n=sizeof(set)/sizeof(set[0]);
	cout<<SubsetSum(set,n,sum);
}
