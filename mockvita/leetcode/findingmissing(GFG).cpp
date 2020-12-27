#include<bits/stdc++.h>
using namespace std;
void getTwoElements(int arr[],int n,int *x,int *y)
{
	int xor1;
	int set_bit_no;
	int i;
	*x=0;
	*y=0;
	xor1=arr[0];
	
	
	for(i=1;i<n;i++)
	xor1=xor1^arr[i];
	
	
	for(i=1;i<=n;i++)
	xor1=xor1^i;
	
	
	set_bit_no=xor1&~(xor1-1);
	
	for(i=0;i<n;i++){
	if(arr[i]&set_bit_no)
	*x=*x^arr[i];
	else
	*y=*y^arr[i];
}


for(i=1;i<=n;i++)
{
	if(i&set_bit_no)
	*x=*x^i;
	else
	*y=*y^i;
	}
	
	
	}
	int main()
	{
		int arr[]={1,3,4,5,5,6,2};
		/*missing element is 7
		 and repeated element is 5*/
		int *x=(int *)malloc(sizeof(int));
		int *y=(int *)malloc(sizeof(int));
		int n=sizeof(arr)/sizeof(arr[0]);
		getTwoElements(arr, n,x,y);
		cout<<"missing element is  " <<*x<<endl;
		cout<<"repeated element is  "<<*y<<endl;
		 getchar();
		}
