#include<string>
#include<iostream>
#include<unordered_map>
#define MAX 20
using namespace std;
int T[MAX][MAX];
void LCS(string X,string Y,int m,int n)
{

	for(int i=0;i<=m;i++)
	T[i][0]=0;
	
	for(int i=0;i<=n;i++)
	T[0][i]=0;
	
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
}
string LCSString(string X,string Y,int m,int n)
{
	if(m==0 || n==0)
	return "";
	
	if(X[m-1]==Y[n-1])
	return LCSString(X,Y,m-1,n-1)+X[m-1];
	
	if(T[m-1][n]>T[m][n-1])
	return LCSString(X,Y,m-1,n);
	else
	return LCSString(X,Y,m,n-1);
	
	
	
	
}
int main()
{
	string X="ABCBDAB";
	string Y="BDCABA";
	LCS(X,Y,X.length(),Y.length());
	cout<<LCSString(X,Y,X.length(),Y.length());
}
