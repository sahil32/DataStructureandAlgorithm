#include<bits/stdc++.h>
using namespace std;
void leftnegative(int arr[], int low,int high)
{
	int i=low;
	while(i<=high)
	{
		if(arr[i]<0)
		swap(arr[i++],arr[low++]);
		else
		i++;
		}
	}
int main()
{
	int arr[] = {5,6,45,84,-6,55,-4,-52,-53,56,-78,32,-8};
	int n = sizeof(arr)/sizeof(arr[0]);
	leftnegative(arr,0,n-1);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;}
