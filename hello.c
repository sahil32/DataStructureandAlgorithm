#include<stdio.h>
int fun(int);
int main()
{
    float k=3;
    fun(k=5.00000);
    printf("%f\n", k);
    return 0;
}
int fun(int i)
{
    i++;
    return i;
}