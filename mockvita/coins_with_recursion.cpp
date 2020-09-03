// We have given the amount (sum) so we have to find the combinations of the coins so that the sum of coins are equal to the amount and the no. of coins used are minimized 

#include <iostream>
#include<limits>
using namespace std;
int fun (int *a, int sum){
	if(sum < 0){
		return INT_MAX-1;
	}
	if(sum == 0)
	return 0;
	
	int res = INT_MAX;
	for (int i=0;i<4;i++){
		int temp = 1+ fun(a,sum-a[i]);
		if (temp < res)
		res = temp;
	}
	return res;
	
}
int main(){
	int a[4] = {1,3,5,7};
	int sum {0};
	cin >> sum;
	int coins = fun(a, sum);
	cout << coins << endl;
}
