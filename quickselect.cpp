#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int l, int r)
{
	int s=arr[r],i = l;
	for(int j=l;j<r;j++)
	{
		if(arr[j]<=s)
		{
			swap(arr[i],arr[j]);
			i++;
			}
		}
		swap(arr[i],arr[r]);
		return i;
	}
	int kthsmallest(int arr[], int l, int r, int k)
	{
		if(k > 0 && k<= r - l+1){
			
			int index = partition(arr, l, r);
			if(index - l ==k-1)
				return arr[index];
			else if(index-l>k-1)
			return kthsmallest(arr,l,index-1,k);
			else
			return kthsmallest(arr, index+1,r,k-index+l-1);	
			}
			return INT_MAX;
		}
int main()
{
	int arr[] = {10, 4, 5, 8, 6, 11, 26};
	int n = sizeof(arr)/sizeof(arr[0]);
	int  k = 4;
	cout<<"kth smallest element is :" <<kthsmallest(arr,0,n-1,k);
	return 0;
	}
