#include<bits/stdc++.h>
using namespace std;
int twosum(int *arr,int j,int k,int tar)
{
    while(j!=k)
    {
        int sum = arr[j]+arr[k];
        if(sum == tar)
        return 1;
        else if(sum > tar)
        k--;
        else
            j++;
    }
    return 0;
}
int threesum(int *arr,int n,int tar)
{
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        int s_t = tar - arr[i];
        int ans = twosum(arr,i+1,n-1,s_t);
        if(ans)
        return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tar;
        cin>>n>>tar;    
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<threesum(arr,n,tar)<<endl;
    }
    return 0;
}