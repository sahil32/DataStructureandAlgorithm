#include<stdio.h>
void Merge(int *a,int low,int mid,int high)
{
	int c[20],i,j,k=0;
	i=low;
	j=mid+1;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
		{
			c[k++]=a[i++];
		}
		else
		{
			c[k++]=a[j++];
		}
	}
	while(i<=mid)
	{
		c[k++]=a[i++];
	}
	while(j<=high)
	{
		c[k++]=a[j++];
	}
	k=0;
	for(i=low;i<=high;i++)
	{
		printf("%d\t",c[k]);
		a[i]=c[k++];
	}
	printf("\n");
}
void MergeSort(int *a,int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		MergeSort(a,low,mid);
		MergeSort(a,mid+1,high);
		Merge(a,low,mid,high);
		
	}
}
int main()
{
	int i;
	int a[]={8,7,6,5,4,3,2,1};
	MergeSort(a,0,7);
	printf("Data After Sorting:\n");
	for(i=0;i<8;i++)
	printf("%d\t",a[i]);	
}
