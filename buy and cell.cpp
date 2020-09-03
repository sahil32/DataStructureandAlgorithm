#include<bits/stdc++.h>
using namespace std;
int find_max(vector<int> prices,int l,int m,int r)
    {
        int i=l;
        int j=m+1;
        int profit=0;
        while(i<=m&&j<=r)
        {
            profit=max(profit, prices[j]-prices[i]);
            
        }
        cout<<profit;
        return profit;
    }
    void merge(vector<int> &prices,int l,int r)
    {
        int profit=0;
        if(l<r)
        {
            int mid=l+(r-l)/2;
            merge(prices,l,mid);
            merge(prices,mid+1,r);
            profit=max(profit,find_max(prices,l,mid,r));
            cout<<profit<<"\n";
        }
    }
int main()
{
	vector<int> prices={7,1,5,3,6,4};
	int max_profit=0;
        int left=0;
        int right=prices.size()-1;
        merge(prices,left,right);
        return 0;
}
