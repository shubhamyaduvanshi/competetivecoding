//backtracking problem to count all possible path  in acyclic graph b/w two given vertices.//it is a type of dfs
//u can try it using bfs with queue as declared of pairs. 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
void pathcount(int s,int d,int &count,bool visited[],vector<vector<int> > &adj)//it is imp in backtracking over addresss of count value changed.
{//count value on same adsress. u are suggested to use address parameter in recursion always helpful. 
    visited[s]=true;
    if(s==d)
    	count++;
    else
    {
    	for(int i=0;i<adj[s].size();i++)
    	{
    		if(!visited[adj[s][i]])
    			pathcount(adj[s][i],d,count,visited,adj);
    	}
    }
    visited[s]=false;
}
int countallpath(int s,int d,vector<vector<int> > &adj)
{
	bool visited[n+1];
	memset(visited,false,sizeof(visited));
	int count=0;
	pathcount(s,d,count,visited,adj);
	return count;
}
int main()
{
	cin>>n;
	int e;
	cin>>e;
	int x,y;
	vector<vector<int> > adj(n+1);
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
	}
	int s,d;
	cout<<"source for paths?:"<<endl;
	cin>>s;
	cout<<"destination for paths?:"<<endl;
	cin>>d;
	int ans=countallpath(s,d,adj);
	cout<<"no. of all possible path is:"<< ans<<endl;
}