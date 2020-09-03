#include<stdio.h>
int main()
{
	int x=10;
	int y=20;
	printf("before swapping value of x and y is=%d\t%d",x,y);
	x^=y;
	y^=x;
	x^=y;
	printf("\nafter swapping value of x and y is=%d\t%d",x,y);	
	return 0;
}

