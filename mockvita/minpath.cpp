#include<vector>
#include<iostream>
using namespace std;
int min(int a,int b)
{
	return a>b?b:a;
}
int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int T[n][m];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                T[i][j]=0;
        T[m-1][n-1]=grid[m-1][n-1];
        int i=n-1;
        int j=i;
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(i!=0&&j!=0)
                T[i][j]=grid[i][j]+min((i==0?INT_MAX:grid[i-1][j]),(j==0?INT_MAX:grid[i][j-1]));
            }
        }
        for(int i=0;i<m;i++)
        {
        	for(int j=0;j<n;j++)
        	{
        		cout<<T[i][j]<<" ";
			}
			cout<<"\n";
		}
        return T[0][0];
    }
int main()
{
	vector<vector<int>> grid={{1,3,1},{1,5,1},{4,2,1}};
	cout<<minPathSum(grid);
	return 0;
}
