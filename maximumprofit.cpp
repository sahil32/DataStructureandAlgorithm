#include<bits/stdc++.h>
using namespace std;
int maximumprofit2(vector<int> nums, int n)
{
    vector<int> profit(n,0);
    int max_price = nums[n-1];
    for(int i = n-2;i>=0;i--)
    {
        if(nums[i]>max_price)
        max_price = nums[i];
        profit[i] = max([profit[i+1],max_price-profit[i]]);

    }
    int min_price = num[0];
    for(int i=1;i<n;i++)
    {
        if(nums[i]<min_price)
        min_price = nums[i];
        profit[i] = max(profit[i-1],profit[i]-min_price);
    }
    return profit[n-1];

    
}
int main(int argc, char const *argv[])
{ 
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    cin>>nums[i];
    cout<<maximumprofit2(nums,n)<<endl;
    return 0;
}
