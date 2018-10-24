#include<bits/stdc++.h>
using namespace std;
class Graph
{
	int v;
	list<int>*adj;//list<int>*adj;
public:
	Graph(int v);//constructor of no return type.
	void addedge(int u,int w)
	{
        adj[u].push_back(w);
        adj[w].push_back(u);
	}
	void bfs(int s);
};
    Graph:: Graph(int v)
	{
       this->v=v;
       adj=new list<int>[v];
	}  
void Graph::bfs(int s)
{
	bool *visited=new bool[v];
	memset(visited,false,sizeof(visited));
	list<int>queue;
    visited[s]=true;
    queue.push_back(s);
    list<int>::iterator itr;
    while(!queue.empty())
    {
        s=queue.front();
        cout<<s<<" ";
       queue.pop_front();
       for( itr=adj[s].begin();itr!=adj[s].end();itr++)
       {
       	 if(!visited[*itr])
       	 {
       	 	visited[*itr]=true;
       	 	queue.push_back(*itr);
       	 }
       }
    }
}
int main(void)
{
     Graph g(4);//graph of 6 vertics.
     int e;
     cin>>e;
     int u,w;
     for(int i=0;i<e;i++)
     {
     	cin>>u>>w;
     	g.addedge(u,w);
     }
     cout<<"foolowing is bfs traversal"<<" ";
     g.bfs(1);
     cout<<endl;
     return 0;
}