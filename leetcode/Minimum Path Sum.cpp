#include<iostream>
#include<vector>
using namespace std;
int min(int a,int b)
{
	return a<b?a:b;
}
int minCostPath(vector<vector<int>>& grid)
{
	int n=grid.size();
	int m=grid[0].size();
	int T[n][m];
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=m-1;j++)
		{
			if(i==0&&j==0)
			{
				T[i][j]=grid[i][j];
			}
			else if (i==0)
			{
				T[i][j]=grid[i][j]+T[i][j-1];
			}
			else if (j==0)
			{
				T[i][j]=grid[i][j]+T[i-1][j];
			}
			else{
				T[i][j]=grid[i][j]+min(T[i-1][j],T[i][j-1]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<T[i][j]<<" ";
		}
		cout<<"\n";
	}
	return T[n-1][m-1];
}
int main()
{
	vector<vector<int>> grid={{1,2,5},{3,2,1}};
	cout<<minCostPath(grid);
	return 0;
}
