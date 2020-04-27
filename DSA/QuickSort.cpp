#include<stdio.h>
void QuickSort(int *a,int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(i<=last && a[pivot]>=a[i])
			i++;
			
			while(j>=first && a[pivot]<a[j])
			j--;
			
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		for(i=first;i<=last;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
		QuickSort(a,first,j-1);
		QuickSort(a,j+1,last);
			
	}	
}
int main()
{
	int i;
	int a[]={23,11,45,16,9,55,8,63,14,39,2};
	QuickSort(a,0,10);
	printf("Data After Sorting:\n");
	for(i=0;i<11;i++)
	printf("%d\t",a[i]);	
}
