#include<bits/stdc++.h>
using namespace std;
int findMaxpro(int arr[],int n)
{
    int maxi = 1;
    int mini = 1;
    int overallmax = INT_MIN;
    for(int i = 0;i < n;i++)
    {
        if(arr[i]>0)
        {
            maxi = maxi*arr[i];
            mini = max(mini*arr[i],1);
        }
        if(arr[i] == 0)
        {
            maxi=1;mini = 1;
        }
        if(arr[i] < 0)
        {
            maxi = max(mini*arr[i],1);
            mini = maxi*arr[i]; 
        }
        overallmax = max(maxi,overallmax);
    }

    return overallmax;
}

int main()
{
    int arr[] = {6, -3, -10, 0, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findMaxpro(arr,n);
}