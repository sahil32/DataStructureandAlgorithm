#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	istringstream ss(str);
	set<string> hash;
	do{
		string s;
		ss>>s;
		if(hash.find(s)==hash.end())
		{cout<<s<<" ";
			hash.insert(s);}
		}while(ss);
		
			cout<<endl;
	return 0;}

