#include<iostream>
using namespace std;
int minCoinChange(int coins[],int sum)
{
	if(sum<0)
	return 0;
	
	if(sum==0)
	return 0;
	int res=INT_MAX;
	for(int i=0;i<3;i++)
	{
		int temp=1+minCoinChange(coins,sum-coins[i]);
		if(temp<res)
		res=temp;
	}
	return res;
	}
int main()
{
	int coins[]={1,2,5};
	int sum=11;
	cout<<minCoinChange(coins,sum);
	return 0;
}
