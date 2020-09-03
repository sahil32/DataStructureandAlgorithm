#include<iostream>
using namespace std;
int StringCount(int n, int lastdigit){
    if(n==0)
    return 0;
    if(n==1)
    {

        if(lastdigit == 0)
            return 2;
        else
        return 1;
    }
    if(lastdigit == 0)
        return StringCount(n-1,0)+StringCount(n-1,1);
    else
        return StringCount(n-1,0);
}
int main(){
    int n=4;
    cout << StringCount(n,0);
}
