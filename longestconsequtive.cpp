#include<bits/stdc++.h>
using namespace std;
int longestsub(int arr[],int n)
{
    unordered_set<int> myset;
    int count = 0;
    for(int i= 0;i<n;i++)
    {
        myset.insert(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(myset.find(arr[i]-1)==myset.end())
        {
            int j=arr[i];
            while(myset.find(j)!=myset.end())
            j++;
            count = max(count,j-arr[i]);
        }
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 9, 3, 10, 4, 20, 2 };
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<longestsub(arr, size);
    return 0;
}

