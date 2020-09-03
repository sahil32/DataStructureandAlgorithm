/* We have given the length of the rod so we have to find the combinations
 so that we can get the maximum profit */
#include <iostream>
using namespace std;

int RodCut(int *a, int *prices, int length){
	if(length == 0)
	return 0;
	int result = 0;
	for (int i=0;i<length;i++){
		int temp = RodCut(a,prices, length-a[i]) + prices[i];
		if(temp > result)
			result = temp;
	}
	return result;
}
int main(){
	int a[8] = {1,2,3,4,5,6,7,8};
	int prices[8] = {1,5,8,9,10,17,17,20};
	int length;
	cin >> length;
	cout << RodCut(a,prices , length) << endl;
}
