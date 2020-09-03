#include<iostream>
using namespace std;
int SubsetSum(int set[],int n,int sum)
{
	if(sum==0)
	return 1;
	if(n==0&&sum!=0)
	return 0;
	if(set[n-1]>sum)
	return SubsetSum(set,n-1,sum);
	return SubsetSum(set,n-1,sum)||SubsetSum(set,n-1,sum-set[n-1]);
}
int main()
{
	int set[] = {3, 34, 4, 12, 5, 2};
	int sum=30;
	int n=sizeof(set)/sizeof(set[0]);
	cout<<SubsetSum(set,n,sum);
	return 0;
}
