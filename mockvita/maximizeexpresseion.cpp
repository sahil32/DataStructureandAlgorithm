#include<limits.h>
#include<stdio.h>
int max(int x,int y)
{
	return x>y?x:y;
}
void Display(int *a,int n)
{
	for(int i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	printf("\n");
}
int MaximizeExpression(int *A,int n)
{
	int first[n+1]={INT_MIN};
	int second[n]={INT_MIN};
	int third[n-1]={INT_MIN};
	int fourth[n-2]={INT_MIN};
	
	for(int i=n-1;i>=0;i--)
	first[i]=max(first[i+1],A[i]);
	Display(first,n+1);
	
	for(int i=n-2;i>=0;i--)
	second[i]=max(second[i+1],first[i+1]-A[i]);
	Display(second,n);
	
	for(int i=n-3;i>=0;i--)
	third[i]=max(third[i+1],second[i+1]+A[i]);
	Display(third,n-1);
	
	for(int i=n-4;i>=0;i--)
	fourth[i]=max(fourth[i+1],third[i+1]-A[i]);
	Display(fourth,n-2);
	
	return fourth[0];
}
int main()
{
	int A[]={3,9,10,1,30,40};
	int n=sizeof(A)/sizeof(A[0]);
	
	if(n>=4)
	printf("%d",MaximizeExpression(A,n));
}
