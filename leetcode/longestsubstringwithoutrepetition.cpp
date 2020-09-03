#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string s;
	cin>>s;
	 vector<int> m(256,-1);
        int start=-1;
        int max_len=INT_MIN;
        for(int i=0;i<s.length();i++)
        {
//            if(m[s[i]]>start)
//            {
//                start=s[i];
//            }
            m[s[i]]=i;
            max_len=max(max_len,i-start);   
        }
        for(auto x:m)
        {
        	cout<<x;
		}
        cout<<max_len<<"\n";
        return 0;
}
