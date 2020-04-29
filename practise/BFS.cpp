// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* You have to complete this function*/

/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int s, vector<int> adj[], bool vis[], int N)
{
	queue<int> q;
    q.push(s);
    int head;
    while(!q.empty())
    {
    	head=q.front();
    	if(!vis[head])
	    {
	    	for(auto x: adj[head])
	    	{
	    		if(!vis[x])
	    		{
	    			q.push(x);
				}
			}
			cout<<head<<" ";
				vis[head]=true;
				q.pop();
		}
		else{
			q.pop();
		}	
	}
}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        
        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N] = {false};
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        bfs(0, adj, vis, N);

        cout<<endl;

    }
}

  // } Driver Code Ends
