void CountingSort(int *a,int n)
{
	int max,*b,*c;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	b=(int *)calloc(max+1,sizeof(int));
	for(i=0;i<n;i++)
	{
		++b[a[i]];
	}
	for(i=2;i<=max;i++)
	b[i]=b[i]+b[i-1];
	
	c=(int *)calloc(n+1,sizeof(int));
	for(i=0;i<n;i++)
	{
		c[b[a[i]]]=a[i];
		--b[a[i]];
	}
	for(i=1;i<=n;i++)
	a[i-1]=c[i];	
	free(b);
	free(c);
}
