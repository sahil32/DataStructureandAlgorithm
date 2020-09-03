#include<bits/stdc++.h>
using namespace std;
bool value(pair<char, int>& a, 
         pair<char, int>& b) 
{ 
    return a.second < b.second; 
} 
int main()
{
	string str;
	cin>>str;
	int n;
	cin>>n;
	string p,k;
	string p1="",k1="";
	while(n--)
	{
		cin>>p>>k;
		p1=p1+p;
		k1=k1+k;
	}
	vector<pair<char,int>> vec1,vec2;
	map<char,int> m1;
	map<char,int> m2;
	int a=p1.length();
	int b=k1.length();
	for(int i=0;i<a;i++)
	{
		m1[p1[i]]+=1;
	}
		for (auto& iter :m1) { 
        vec1.push_back(iter); 
    }
    sort(vec1.begin(), vec1.end(), value); 
	for(int i=0;i<b;i++)
	{
		m2[k1[i]]+=1;
	}
	for (auto& iter :m2) { 
        vec2.push_back(iter); 
    }
    sort(vec2.begin(), vec2.end(), value);
    for(auto it: m2)
    {
    	cout<<it.first<<":"<<it.second<<"\n";
	}
	
	vector<char> plane,key;
	for(auto& it: vec1)
	{
		plane.push_back(it.first);
	}
	for(auto& it: vec2)
	{
		key.push_back(it.first);
	}
	string answer="";
	char m;
	int num=str.length();
	for(int i=0;i<num;i++)
	{
		m=str[i];
		auto it = find(plane.begin(), plane.end(), m); 
	   	int index;
	    if (it != plane.end()) { 
	        index = distance(plane.begin(),  it); 
		}
		else
		index=0;
	answer=answer+key[index];
}
for(auto x:key)
{
	cout<<x;
}
cout<<answer;
answer="";
	return 0;
}
