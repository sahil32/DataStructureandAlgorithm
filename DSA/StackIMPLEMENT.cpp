/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

int TOP = -1; //global defination  of value on the top of stack must be empty
void push(int stack[], int x, int n,int TOP){
  if(TOP == n-1){
  cout<<"Stack is full -> overflow condition!";
  }
  else{
  TOP = TOP - 1;
  stack[TOP] = x;
  }
}

bool isEmpty(){
	if(TOP == -1)
		return true;
	else
		return false;
}

void pop()
   {
	   if(isEmpty())
	   cout<<"Stack is empty. Underflow Condition! "<<endl;
  
	   else
   		TOP = TOP +1;
   
   }
int topElement(int stack[])
{
	return stack[TOP];
}

int size()
{ 
	return TOP+1;
}

int main(){
    int n,i,j;
    cin>>n;
    int stack[n];
    int a[n];
    for( i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for( i = 0;i<n;i++)
    {
        for( j=i;j<n;j++)
        {
            if(a[j]>a[i]){
                push(stack,a[j],n,n);
                break;
            }
        }
        if(j==n){
            push(stack,-1,n,n);
        }
    }
    for( i=n-1;i>=0;i--){
        for( j=i;j>=0;j--){
            if(stack[j]<stack[i]){
                pop();
                cout<<stack[j]<<" ";
                break;
            }
            if(j==0){
                cout<<-1<<" ";
                pop();
            }
        }
    }
    
}
