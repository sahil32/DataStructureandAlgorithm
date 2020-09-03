#include<iostream>
#include<string>
#include<unordered_map>
#define M 4
#define N 4
using namespace std;
unordered_map<string,int>map;
int CostPath(int mat[M][N],int m,int n,int cost)
{
	if(cost==0)
	return 0;
	
	if(m==0 && n==0)
	{
		if(mat[0][0]-cost==0)
		return 1;
		else
		return 0;
	}
	string key=to_string(m)+"|"+to_string(n)+"|"+to_string(cost);
	if(map.find(key)==map.end())
	{
		if(m==0)
		map[key]=CostPath(mat,0,n-1,cost-mat[m][n]);
		
		else if(n==0)
		map[key]=CostPath(mat,m-1,0,cost-mat[m][n]);
		
		else
		map[key]=CostPath(mat,m-1,n,cost-mat[m][n])+CostPath(mat,m,n-1,cost-mat[m][n]);
	}
	return map[key];
}
int main()
{
	int mat[M][N]={{4,7,1,6},{5,7,3,9},{3,2,1,2},{7,1,6,3}};
	int cost=25;
	printf("%d",CostPath(mat,M-1,N-1,cost));
}
