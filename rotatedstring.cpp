#include<bits/stdc++.h>
using namespace std;
bool isRotation(string str1,string str2)
{
    if (str1.length()!=str2.length())
    return false;
    str1.append(str1);
    if(str1.find(str2)!=string::npos)
    return true;
    else
    {
        return false;
    }
    
}
int main()
{
    string str1 ="ABXAA";
    string str2 = "CDABA";
    if(isRotation(str1,str2))
    cout<<"YES";
    else
    {
        cout<<"NO";
    }
    
    return 0;
}
