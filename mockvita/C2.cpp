#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<unordered_map>
using namespace std;
int LPSubSeq(string X,string Y,int m,int n)
{
	int T[m+1][n+1];
	memset(T,0,sizeof(T));
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(X[i-1]==Y[j-1])
			T[i][j]=1+T[i-1][j-1];
			else
			T[i][j]=max(T[i-1][j],T[i][j-1]);
		}
	}
	return T[m][m];
}
int main()
{
	string X=" aacdefcaa";
	int m=X.length();
	string Y=X;
	reverse(Y.begin(),Y.end());

	cout<<LPSubSeq(X,Y,m,m);
	
}
