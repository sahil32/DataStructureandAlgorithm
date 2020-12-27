#include<iostream>
using namespace std;
struct Pair{
	int min;
	int max;
	};
	//illustration of all the 3 methods
	// linear search method
	struct Pair getMinmax1(int arr[], int n)
	{
		struct Pair minmax;
		if(n==1)
		{
			minmax.min = arr[0];
			minmax.max = arr[0];
			return minmax;
			}
			if(arr[0]<arr[1])
			{
				minmax.min = arr[0];
				minmax.max = arr[1];
				}
				else
				{
					minmax.min = arr[1];
					minmax.max = arr[0];
					}
					for(int i=2;i<n;i++)
					{
						if(arr[i]>minmax.max)
						minmax.max = arr[i];
						else if(arr[i]<minmax.min)
						minmax.min = arr[i];
						}
						return minmax;
		}
	//second method is tournament method it is more reliable and easy 
	struct Pair getminmax2(int arr[], int low, int high)
	{
		struct Pair minmax ,mml, mmr;
		int mid;
		//if there is only one element 
		if(low == high){
		minmax.min = arr[low];
		minmax.max = arr[high];
		return minmax;
	}
	//if there are 2 elements
	if(high == low +1)
	{
		if(arr[low]>arr[high])
		{
			minmax.max = arr[low];
			minmax.min = arr[high];
			}
			else
			{
				minmax.max = arr[high];
				minmax.min = arr[low];
				}
				return minmax;
		}
		//more than 2 element 
		mid = (low+high)/2;
		mml  = getminmax2(arr,low,mid);
		mmr = getminmax2(arr,mid+1,high);
		
		
		
		if(mml.min<mmr.min)
		minmax.min = mml.min;
		else
		minmax.min = mmr.min;
		
		
		
		
		
		if(mml.max >mmr.max)
		minmax.max= mml.max;
		else
		minmax.max = mmr.max;
		
		return minmax;
		
		}
int main()
{
	struct Pair minmax;
	int arr[] = {1000,11, 445, 1, 300, 3000};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	minmax = getMinmax1(arr,arr_size);
	cout<<"1st function result\n"<<minmax.min<<" "<<minmax.max<<endl;
	minmax = getminmax2(arr, 0, arr_size-1); 
	cout<<"2nd function result\n"<<minmax.min<<" "<<minmax.max<<endl;
	}
