#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp = n;
	int res = 0;
	int k;
	while(temp!=0)
	{
		k = temp%10;
		res = (res*10)+k;
		temp=temp/10;
		}
		if(res==n)
		cout<<"palindrome"<<"\n";
		else
		cout<<"no\n";
	return 0;
	}
