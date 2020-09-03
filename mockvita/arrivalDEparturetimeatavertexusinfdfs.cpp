#include<iostream>
#include<vector>
#include<stack>
using namespace std;
struct Edge
{
	int src;
	int dest;
	int weight;
};
class Graph
{
	public:	
	vector<vector<int>>adjlist;
	Graph(vector<Edge>&edges,int N)
	{
		adjlist.resize(N);
		for(auto edge:edges)
		{
			adjlist[edge.src].push_back(edge.dest);
		}
	}
};
void DFS(Graph &graph,int v,vector<bool>&visited,vector<int>&arrival,vector<int>&deparature,int &time)
{
	arrival[v]=++time;
	visited[v]=true;
	
	for(int i:graph.adjlist[v])
	{
		if(!visited[i])
		DFS(graph,i,visited,arrival,deparature,time);
	}
	deparature[v]=++time;
}
int main()
{
	vector<Edge>edges={{0,1},{0,2},{2,3},{2,4},{3,1},{3,5},{4,5},{6,7}};
	int N=8;
	Graph graph(edges,N);
	
	vector<int>arrival(N);
	vector<int>deparature(N);
	vector<bool>visited(N,false);
	int time=-1;
	
	for(int i=0;i<N;i++)
	{
		if(!visited[i])
		{
			DFS(graph,i,visited,arrival,deparature,time);
		}
	}
	
	
	for(int i=0;i<N;i++)
	{
		cout<<arrival[i]<<"   "<<deparature[i]<<endl;
	}
}
