#include<bits/stdc++.h>
using namespace std;
int findWater(int arr[],int n)
{
    int left[n];
    int right[n];
    int vol = 0;
    left[0]=arr[0];
    for(int i=1; i<n;i++)
    {
        left[i] = max(left[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        right[i] = max(right[i+1],arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        vol+=min(left[i],right[i]) - arr[i];
    }
    return vol;
}
int main()
{
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<findWater(arr,size);
    return 0;
}