#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d0,d1;
		cin>>n>>d0>>d1;
		int arr[n];
		arr[0]=d0;
		arr[1]=d1;
		long long int num = d0;
		for(int i=2; i<n; i++)
		{
			arr[i]=0;
			for(int j=0;j<i;j++)
			{
				arr[i]+=arr[j];
			}
			arr[i]%=10;
		}
		for(int i=1; i<n; i++)
		{
			num=(num*10)+arr[i];
		}
		if(num%3==0)
		{
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}
