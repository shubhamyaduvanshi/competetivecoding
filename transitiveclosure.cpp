//O(v^3)
//transitive closure handled by easily by adj matrix.
#include<bits/stdc++.h>
using namespace std;
int n;
void transitiveclosure(vector<vector<int> >&adj)//(*adj)[n])
{
	int dist[n+1][n+1];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			dist[i][j]=adj[i][j];
    for(int k=0;k<n;k++)//pick k as intermediate vertices.
    {
    	for(int i=0;i<n;i++)
    		for(int j=0;j<n;j++)//looking shortest path from i to j.
    			dist[i][j]=dist[i][j] || (dist[i][k] && dist[k][j]);
    		//same thing as in floyed wrshall only changes. 
    		/*
    		if k is intermediate vertices.
    		and dist[i][j]>dist[i][k]+dist[k][j]//for shortest pair of distance b/w each pair of v in graph.
    		dist[i][j]=dist[i][k]+dist[k][j]
    		*/
    }
//for 0 and 1 here we consider as bit so performed add as && and minus as || operation.
 
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    		cout<<dist[i][j]<<" ";
    	cout<<endl;
    }
    	return ;
}
int main()
{
	cin>>n;//number of vertices.
	int e;
	cin>>e;
	int x,y;
    vector<vector<int> >adj(n);
    for(int i=0;i<n;i++)
    {
    	adj[i].push_back(0);
    }
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
        adj[x][y]=1;
	}
	transitiveclosure(adj);//here typecasting is very compulsory.
	return 0;
}
// in floyd consider self to self as 0
// and if edge present give it as wt
// if no  edge bw then as it as infinity as adj matrix such type is formed. in floyed wrshall only changes.