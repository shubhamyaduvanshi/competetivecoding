#include<bits/stdc++.h>
using namespace std;
void bfs(vector <int>(&adj)[100],int start,int v)
{
     bool *visited=new bool[v];
     for(int i=0;i<v;i++)
     {
     	visited[i]=false;
     }
     int s;
     queue<int> q;//queue can also be impemented with list as doubly linked list.
     visited[start]=true;
     q.push(start);
     while(!q.empty())
     {
         s=q.front();
         cout<<s<<endl;
         q.pop();
     }
     for(int i=0;i<adj[s].size();i++)
     {
     	if(!visited[adj[s][i]])
     	{
             visited[adj[s][i]]=true;
             q.push(adj[s][i]);
     	}
     }
}
int main(void){
	int v;
	cin>>v;
	int a[v][v];
	for(int i=0;i<v;i++)//given adj matrix in 01 format.
	{
        for(int j=0;j<v;j++)
        {
        	int x;
        	cin>>x;
        	a[i][j]=x;
        }
	}
     vector<int>adj[v];//to create adj list.
     for(int i=0;i<v;i++)
     {
     	for(int j=0;j<v;j++)
     	{
     		if(a[i][j]==1)
            adj[i].push_back(j);
     	}
     }
     void bfs(adj,0,v);
}
