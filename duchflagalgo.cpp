#include<bits/stdc++.h>
using namespace std;
void sort_arr(int arr[],int low,int high)
{
	int mid = low;
	while(mid<=high)
	{
		if(arr[mid]==0)
		swap(arr[low++],arr[mid++]);
		else if(arr[mid] == 2)
		swap(arr[mid],arr[high--]);
		else
		mid++;
		}
	}

int main()
{
	int arr[] = {0,1,0,2,0,0,1,2,0,0,2,2,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort_arr(arr,0, n-1);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	return 0;}
