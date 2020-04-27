#include<bits/stdc++.h>
using namespace std;
int findMinCostRec(vector<vector<int>> &cost, int m,int n)
{
	if(m==0||n==0)
	return INT_MAX;
	if(m==1&&n==1)
	return cost[0][0];
	return min(findMinCostRec(cost,m-1,n),findMinCostRec(cost,m,n-1))+cost[m-1][n-1];
}
int findMincostDP(vector<vector<int>>& cost)
{
	int m=cost.size();
	int n=cost[0].size();
	int temp[m][n];
	 for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
	 	{
	 		temp[i][j]=cost[i][j];
	 		if(i==0&&j>0)
	 		{
	 			temp[0][j]+=temp[0][j-1];
			}
			else if(j==0&&i>0)
	 		{
	 			temp[i][0]+=temp[i-1][0];
			 }
			 else if(i>0&&j>0)
			 {
			 	temp[i][j]=temp[i][j]+min(temp[i-1][j],temp[i][j-1]);
			 }
		 }
	 }
	 return temp[m-1][n-1];
}
int main(){
	int m=5,n=5;
	vector<vector<int>> cost={{4,7,8,6,4},{6,7,3,9,2},{3,8,1,2,4},{7,1,7,3,7},{2,9,8,9,3}};
	cout<<"recursive solution is: "<<findMinCostRec(cost,m,n)<<"\n";
	cout<<"dynamic solution is: "<<findMincostDP(cost)<<"\n";
	return 0;
}
