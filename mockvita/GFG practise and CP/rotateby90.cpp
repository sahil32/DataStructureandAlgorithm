#include<bits/stdc++.h>
using namespace std;
#define MAX 100
void rotate90clockwise(int mat[MAX][MAX],int n)
{
    for(int i = 0; i < n/2; i++)
    {
        for(int j = i;j< n-1-i ;j++){
            int temp = mat[i][j];
            mat[i][j] = mat[n-1-j][i];
            mat[n-1-j][i] = mat[n-1-i][n-1-j];
            mat[j][n-1-i] = temp;
        }
    }
}
void printmat(int mat[MAX][MAX], int n)
{
    for(int i = 0; i<n;i++)
    {
        for(int j = 0;j< n;j++)
        {
            cout<<mat[i][j]<<" ";
                    }cout<<'\n';
    }
}
int main(){
    int n;
    cin>>n;
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>mat[i][j];
    }
    rotate90clockwise(mat,n);
    printmat(mat,n);
    return 0;
}