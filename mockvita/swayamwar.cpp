#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
 unordered_multiset <char> g;
 int n;
 cin>>n;
 string brides,grooms;
 cin>>brides;
 cin>>grooms;
 for(int i=0;i<n;i++)
 {
 	g.insert(grooms[i]);
 }
 for(int j=0;j<n;j++)
 {
 	if(g.find(brides[j])==g.end())
 	break;
 	else
 	g.erase(g.find(brides[j]));
 }
 cout<<g.size()<<"\n";
}
