//C++ program to find minimum number of jumps to reach the end of the array
#include<bits/stdc++.h>
using namespace std;
int minJumps(int arr[], int n)
{
	if(n<=1)
	return 0;
	
	if(arr[0] == 0)
	return -1;
	
	int maxreach = arr[0];
	
	int jump = 1;
	int step=arr[0];
	for(int i=1;i<n;i++)
	{
		
		if(i==n-1)
		return jump;
		maxreach = max(maxreach, i+arr[i]);
		step--;
		if(step==0){
			jump++;
			if(i>=maxreach)
			return -1;
			step = maxreach-i;
			}
		}
		return -1;
	
	}
int main()
{
	int arr[] = { 1, 3, 6, 3, 2, 3, 6, 8, 9, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of jumps to";
    cout << " reach the end is " << minJumps(arr, n);
	return 0;}
