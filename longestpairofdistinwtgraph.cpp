//find out longest pair  of nodes with  distance in weighted graph 
#include<bits/stdc++.h>
using namespace std;
//itearative dfs as stack use in place of recursion. and dfs apply for all nodes it may be not connected all from other vertices.
void dfs(vector<vector<pair<int,int> > >&adj,int src,vector<bool>&visited,int prevlen,int *maxlen)
{
    visited[src]=true;
    int currlen=0;
    pair<int,int>pai;
    for(int i=0;i<(int)adj[src].size();i++)
    {
        pai=adj[src][i];
        int k=pai.first;
        if(!visited[k])
        {
            currlen=prevlen+ (pai.second);
            dfs(adj,k,visited,currlen,maxlen);
        }
        if ((*maxlen) < currlen) 
            *maxlen = currlen;
            currlen=0;
    }
}
int longestpath(vector<vector<pair<int,int> > >&adj,int n)
{
    int maxlen=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        vector< bool > visited(n+1, false); 
        dfs(adj,i,visited,0,&maxlen);
    }
    return maxlen;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x,y,wt;
        vector<vector<pair<int,int> > >adj(n+1);
        for(int i=0;i<n-1;i++)
        {
            cin >>x>>y>>wt;
            adj[x].push_back(make_pair(y,wt));
            adj[y].push_back(make_pair(x,wt));
        }
        int d=longestpath(adj,n);
        if(d<100)
        cout<<"0"<<" "<<d<<endl;
        else if(d>100&&d<1000)
        cout<<"100"<<" "<<endl;
        else if(d>1000&&d<10000)
        cout<<"1000"<<" "<<endl;
        else if(d>10000)
        cout<<"10000"<<" "<<endl;
    }
    return 0;
}