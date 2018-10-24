// k cores of connected graph. as removing vertices of degree less than k.
#include<bits/stdc++.h>
using namespace std;
int n=0;
vector<vector<int> >adj(100001);
void init(vector<vector<int> >&adj)
{
	for(int i=0;i<n;i++)
		adj[i].push_back(0);
}
bool dfs(int start,vector<bool>&visited,vector<int>&vertexdegree,int k)
{
	visited[start]=true;
	for(int i=0;i<adj[start].size();i++)
	{
		if(vertexdegree[start]<k)
			vertexdegree[adj[start][i]]--;//adjacent vertex also degree decreases.
		if(!visited[adj[start][i]])
		{
			if(dfs(adj[start][i],visited,vertexdegree,k))
				vertexdegree[start]--;
		}
	}
	return (vertexdegree[start]<k);
}
void printkcores(int k)
{
    vector<bool>visited(n,false);
    int mindegree=INT_MAX;
    int start;
    vector<int>vertexdegree(n);
    for(int i=0;i<n;i++)
    {
       vertexdegree[i]=(adj[i].size())-1;
       if(vertexdegree[i]<mindegree)
       {
       	  mindegree=vertexdegree[i];
       	  start=mindegree;//we will strat eleting from lowest degree vertex .
       }
    }
    cout<<"vertices with degree"<<endl;
    for(int i=0;i<n;i++)
    {
    	cout<<i<<"ofdegree:"<<vertexdegree[i]<<endl;
    }
    cout<<endl;
    //start dfs from minimum degree of vertex.
    dfs(start,visited,vertexdegree,k);
    for(int i=0;i<n;i++)
    {
        if(visited[i]==false)
        	dfs(i,visited,vertexdegree,k);
    }

    //printing remained graph.....
    for(int i=0;i<n;i++)
    {
    	if(vertexdegree[i]>=k)
    	{
    		cout<<"\n["<<i<<"]";
    		for(int j=0;j<adj[i].size();j++)
    		{
    			if(vertexdegree[adj[i][j]]>=k)
    				cout<<"-> "<<adj[i][j];
    		}
    	}
    }
}

int main()
{
	cin>>n;
	int e;
	cin>>e;
	init(adj);
	int x,y;
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int k;
	cout<<"eneter core value:";
	cin>>k;//k=cores degree.
    printkcores(k);
    cout<<endl;
	return 0;
}