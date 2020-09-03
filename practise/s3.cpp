#include<bits/stdc++.h>
using namespace std;
#define ll long long
int Merge(int *arr,int l,int m, int r)
{	
	int inv_count=0;
	int i = l;
	int j = m+1;
	int c[r-l+1];
	int k=0;
	while(i<=m-1 && j<=r)
	{
		if(arr[i]<arr[j])
		{
			c[k++]=arr[i++];
		}
		else{
			inv_count+=(m-i);
			c[k++]=arr[j++];
		}
	}
	while(i<=m-1)
	{
		c[k++]=arr[i++];
	}
	while(j<=r)
	{
		c[k++]=arr[j++];
	}
	
	return inv_count;
}
int MergeSort(int *arr,int l,int r)
{
	int mid,inv_count=0;
	if(l<r)
	{
		mid=l+(r-l)/2;
		inv_count+=MergeSort(arr,l,mid);
	    inv_count+=MergeSort(arr,mid+1,r);
		inv_count+=Merge(arr,l,mid,r);	
	}
	return inv_count;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<MergeSort(arr,0,n-1)<<"\n";
	return 0;
}
