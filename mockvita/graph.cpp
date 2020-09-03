#include<iostream>
#include<vector>
using namespace std;
struct Edge
{
	int src;
	int dest;
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
	void Display(int N)
	{
		for(int i=0;i<N;i++)
		{
			cout<<i<<"   ---->  ";
			for(int v:adjlist[i])
			cout<<v<<"  ";
			
			cout<<endl;
		}
	}
};
int main()
{
	vector<Edge>edges={{0,1},{1,2},{2,0},{2,1},{3,2},{4,5},{5,4}};
	int N=6;
	Graph graph(edges,N);
	graph.Display(N);
}
