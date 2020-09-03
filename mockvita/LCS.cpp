#include<string>
#include<iostream>
using namespace std;
string LCS(string x,string y,int m,int n)
{
	int maxlen=0;
	int endindex=m;
	int T[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			T[i][j]=0;
		}
	}//can also use memset(T,0,sizeof(T)); include <cstring> for this
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(x[i-1]==y[j-1])
			{
				T[i][j]=T[i-1][j-1]+1;
				if(T[i][j]>maxlen)
				{
					maxlen=T[i][j];
					endindex=i;
				}
			}
		}
	}
	return x.substr(endindex-maxlen,maxlen);//predefine function substr
}
int main()
{
	string x="PQRS";
	string y="QAS";
	int m=x.length();
	int n=y.length();
	cout<<LCS(x,y,m,n);
	return 0;
}
