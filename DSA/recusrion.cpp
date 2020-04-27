#include<bits/stdc++.h>
using namespace std;
int func(int x,int y)
{
	if(x==0)
	return y;
	else{
		return func(x-1,x+y);
	}
}
int FindMin(int arr[],int a, int b)
{
	int currmin=INT_MAX;
	for(int i=a;i<=b;i++)
	{
		currmin= min(arr[i],currmin);
	}
	return currmin;
}
void func2(int arr[],int start_index,int end_index)
{
	if(start_index>=end_index)
	return;
	int temp,min_index;
	min_index=FindMin(arr,start_index,end_index);
	temp=arr[start_index];
	arr[start_index]=arr[min_index];
	arr[min_index]=temp;
	return func2(arr, start_index+1,end_index);
}
//fuction to calculate log base 2
int log(int n)
{
	if(n=1)
	return 0;
	else{
		return 1+log(n/2);
	}
}
//fuction that calculate binary representation
void binary(int n)
{
	if(n==0)
	return;
	binary(n/2);
	cout<<n%2;
}
//number of stars 
void stars(int n)
{
	if(n<1)
	return;
	stars(--n);	
	for(int i=1;i<=n;++i)
	cout<<" * ";
	cout<<"\n";
}
int main()
{
	int num;
	cin>>num;
	stars(num);
	return 0; 
}
