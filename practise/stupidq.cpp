#include<iostream>
using namespace std; 
long long lcm(int a,long long int b)
{
	long long int temp1=a;
	long long int temp2=b;
	while(temp2!=0)
	{
		long long int newtemp=temp2;
		temp2=temp1%temp2;
		temp1=newtemp;
	}
	return (long long) temp1*((a/temp1)*(b/temp1));
}
long long int getlcm(int n)
{
	long long int result =1;
	for(int j=1;j<=n;++j)
	{
		result=lcm(j,result);
		cout<<j<<"  "<<result<<"\n";
	}
	return result;
}
int main()
{
	int t=3;
	int n;
	while(t--)
	{
		cin>>n;
		cout<<getlcm(n)<<endl;
	}
}
