#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return Maximum Rectangular area in a histogram
// arr[]: input array
// n: size of array
long long getMaxArea(long long arr[], int n){
    stack<long long> s;
    long long int area = 0;
    long long int maxarea = 0;
    long long i = 0;
    while(i<n)
    {
        if(s.empty()||arr[s.top()]<=arr[i])
        s.push(i++);
        else{
            long long tp = s.top();
            s.pop();
            if(s.empty())
            area = arr[tp]*i;
            else
            {
                area = arr[tp]*(i-s.top()-1);
            }
            if(area>maxarea)
            maxarea = area;
            
        }
    }
    while(s.empty()==false)
    {
        long long tp = s.top();
            s.pop();
            if(s.empty())
            area = arr[tp]*i;
            else
            {
                area = arr[tp]*(i-s.top()-1);
            }
            if(area>maxarea)
            maxarea = area;
    }
    return maxarea;
}

// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout<<getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
    
