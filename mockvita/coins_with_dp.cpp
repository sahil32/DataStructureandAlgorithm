// Find the min no. of coins required to get the sum of all the included coins equal to the variable 'sum'
// We done this by dynamic programming approach in which we find the sum for all amounts from starting to sum and then for each amount we \
have to consider all the cases of all the coins to be included

// Means to find sum of 15, We will find for all the sum from 0 to 15 and for each case we have to consider all the coins
// So that like for sum=3 at a particular time we have to find min no. of coin if we included 1,3,5,7 and the remaining will be with us already saved in the \
array
#include <iostream>

using namespace std;

int fun(int *s, int sum){
    int T[sum + 1];
    T[0] = 0;
    for (int i=1;i<=sum;i++){ // Finding all the sum from i=1 to i=15

        T[i] = 100;
        int res = 100;
        for (int c = 0;c<4;c++){ // For each particular i we have to include 1,3,5,7 element of the original array to find optimal solution
            if(i-s[c]>=0)
                res = T[i-s[c]];

            if(res != 100)
            T[i] = min(T[i], res+1);

        }

    }
    return T[sum];
}
int main(){
    int a[] {1,3,5,7};
    int sum {15};
//    cin >> sum;
    cout << fun(a,sum);
}

