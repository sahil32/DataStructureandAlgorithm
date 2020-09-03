#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string str[50];
  int i=0;
  while(1)
  {
    cin>>str[i];
    if(str[i]=="####")
      break;
    i++;
  }
  i=0;
 cout<<str[0]<<"\n";
  while(str[i]!="####")
  {
    int len=str[i].length()-1;
    if(str[i][len]!=str[i+1][0])
      break;
    else
      cout<<str[i+1]<<"\n";
    i++;
  }
}
