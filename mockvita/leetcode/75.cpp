#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*dutch flag algorithm*/
void sortColors(vector<int> &nums)
{
	int low=0,mid=0;
	int high=nums.size()-1;
	while(mid<=high)
	{
		if(nums[mid]==0){
		swap(nums[mid],nums[low]);
		low++;mid++;
	}
	else if(nums[mid]==2)
	{swap(nums[high],nums[mid]);
		high--;
		}
		else mid++;
		}
		
	}
int main()
{
	vector <int> nums={2,0,2,1,1,0};
	sortColors(nums);
	for(auto x: nums)
	cout<<x<<"  ";
	return 0;
	}
