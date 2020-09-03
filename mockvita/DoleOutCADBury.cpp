#include<bits/stdc++.h>
using namespace std;
int main()
{
	int w1,w2,h1,h2;
	cin>>w1;
	cin>>w2;
	cin>>h1;
	cin>>h2;
	int c=0;
	for(int i=w1;i<=w2;i++)
	{
		for(int j=h1;j<=h2;j++)
		{
			int width=i;
			int height=j;
			int b=0;
			while(height>0&&width>0)
			{
				if(height<width)
				{
					b=height;
					width-=b;
					c++;
				}
				else
				{
					b=width;
					height-=b;
					c++;
				}
			}
		}
	}
	cout<<c<<"\n";
	return 0;
}
