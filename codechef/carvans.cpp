#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int count=1;
		int max_speed=arr[0];
		for(int i=1;i<n;i++)
		{
			if(arr[i]<max_speed)
			{
				max_speed=arr[i];
				count++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
