#include <bits/stdc++.h>
using namespace std;
int findminimumswaps(vector<int> arr, int n, int k)
{
   int count = 0;
   for(int i=0;i<n;i++)
   if(arr[i]<=k)
   count++;
    int non = 0;
    for(int i=0;i<count;i++)
    if(arr[i]>k)
    non++;
    int ans = non;
    for(int i=0,j=count; j<n; i++,j++)
    {
        if(arr[i]>k)
        non--;
        if(arr[j]>k)
        non++;
        ans = min(ans,non);
    }
    return ans;
}
int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    cout<<findminimumswaps(arr,n, k)<<"\n";
}
	return 0;
}