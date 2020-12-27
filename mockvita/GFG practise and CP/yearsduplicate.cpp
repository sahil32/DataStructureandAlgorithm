//following program will check distinct years in the string 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string s;
	getline(cin,s);
    set<string> unique;
	string date="";
	for(int i=0;i<s.length();i++)
	{
		if(isdigit(s[i]))
		date+=s[i];
		if(s[i]=='-')
		date.clear();
		if(date.length() ==4)
		{
			unique.insert(date);
			date.clear() ;}
		}
		cout<<unique.size();
	return 0;}
