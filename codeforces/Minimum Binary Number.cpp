#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	string mystr;
	int flag=0;
	if(str=="0")
	{
		cout<<"0"<<"\n";
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		if(str[i]=='1'&&flag==0)
		{
			mystr="1";
			flag=1;
		}
		else if(str[i]=='0' && flag==1)
		{
			mystr=mystr+"0";	
		}
	}
	cout<<mystr<<"\n";
}
