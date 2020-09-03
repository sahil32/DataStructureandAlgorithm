#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int low=0,mid=0,high;
	    cin>>n;
	    high=n-1;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    while(mid<=high)
	    {
	        if(arr[mid]==0)
	        {
	            swap(arr[mid],arr[low]);
	            mid++;
	            low++;
	        }
	        else if(arr[mid]==2)
	        {
	            swap(arr[mid],arr[high]);
	            high--;
	        }
	        else 
	        {
	            mid++;
	        }
	    }
	    for(int k=0;k<n;k++)
	    {
	        cout<<arr[k]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
