#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str;
	int a=0,b=0;
	int r_a=n;
	int r_b=n;
	cin>>str;
	int i;
	for(i=0;i<n*2;i++)
	{
		if(i%2==0&&str[i]=='1')
		{
			a++;
		}
		else if(i%2!=0&&str[i]=='1')
		{
			b++;
		}
		r_a--;
		r_b--;
		if((a-b)>r_b)
		{
			break;
		}
		else if((b-a)>r_a)
		{
			break;
		}
	}
	cout<<i+1<<"\n";
	return 0;
}
