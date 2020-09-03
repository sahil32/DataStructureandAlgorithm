#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp1=0;int temp2=1;
	while(n--)
	{
		int c=temp1+temp2;
		temp1=temp2;
		temp2=c;
		cout<<c<<"  ";
	}
	return 0;
}
