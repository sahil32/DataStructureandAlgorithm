#include <iostream>
using namespace std;
int RodCut(int *a, int *prices, int length){
    int b[length +1];
    b[0] = 0;
    for (int i=1; i<=length;i++){
        b[i] = 0;
        int res = 0;
        for(int j=0;j<8;j++){
            if(i-a[j]>=0)
                res = b[i-a[j]] + prices[j];
            if(res > b[i])
                b[i] = res;
        }
    }
    return b[length];
}
int main(){
    int a[] {1,2,3,4,5,6,7,8};
    int prices[] {1,5,8,9,10,17,17,20};
    int length;
    cin >> length;
    cout << RodCut(a,prices,length);
}
