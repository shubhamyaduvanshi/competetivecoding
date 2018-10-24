//O(v^2) transitive closure using dfs in o^2 complexity.
#include<bits/stdc++.h>
using namespace std;
#define max 100001
int n;
int tcmat[max][max];

void dfs(int s,int v,vector<vector<int> >&adj,int visited[])
{
    tcmat[s][v]=1;//actually it acts as visited here makes .
    visited[v]=1;
    for(int i=0;i<adj[v].size();i++)
    {
        if(!visited[adj[v][i]])
        {   
            dfs(s,adj[v][i],adj,visited);
        }
    }
}

void transitiveclosure(vector<vector<int> >&adj)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            tcmat[i][j]=0;
    }
    int visited[n];
    memset(visited,0,sizeof(visited));
	for(int i=0;i<n;i++)
    {
        dfs(i,i,adj,visited);
        memset(visited,0,sizeof(visited));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<tcmat[i][j]<<" ";
        cout<<endl;
    }   
}
int main()
{
	cin>>n;
	int e;
	cin>>e;
	int x,y;
    vector<vector<int> > adj(n);
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
        adj[x].push_back(y);
	}
	transitiveclosure(adj);
	return 0;
}