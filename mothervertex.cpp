//generrally mother vertex is considered in directed graph .
//yes it is possible to more than 1 mother vertex in same graph.
#include<bits/stdc++.h>
using namespace std;
void dfs(int v,vector<bool>&visited,vector<int > adj[])
{
	visited[v]=true;
	vector<int>:: iterator j;
	for(j=adj[v].begin();j!=adj[v].end();j++)
	{
        if(!visited[*j])
        	dfs(*j,visited,adj);
	}
}
int findmothervertex(vector<int>adj[],int v)
{
    vector<bool>visited(v,false);
    int n;
    for(int i=0;i<v;i++)
    {
        if(visited[i]==false)
        {
        	dfs(i,visited,adj);
        	n=i;//actually n is handling last exicuted or last finished node in dfs traversal.
        }
    }
    fill(visited.begin(),visited.end(),false);//use this like memset in arrays
    //check corresponding to n as is it mother vertex or not.
     // again check  dfs from n if all vertices are visited yes n is if any vertices left means n is not mother vertex then may be graph having  no any mother vertex.
    dfs(n,visited,adj);
    for(int i=0;i<v;i++)
    	if(visited[i]==false)
    		return -1;
    	return n;
}
int main()
{
	int n;
	cin>>n;
	int e;
	cin>>e;
	int x,y;
	vector<int> adj[n+1];
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
        adj[x].push_back(y);
        //adj[y].push_back(x);//consider vertices from index as 0.
	}
	int ans=findmothervertex(adj,n);
	cout<<"MOTHER VERTEX of given graph is:= "<<ans<<endl;
}