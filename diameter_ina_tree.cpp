//diameter of a tree using bfs u can do any traversal.
#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
typedef long long int ll;
//#define ll long long
bool visited[MAX];
ll dist[MAX]; 
struct node
{ ll dest;
  ll weight;
};
vector<node> adj[MAX]; 

ll bfs(ll start,ll v)
{ 
    memset(visited,false,sizeof(visited));
    memset(dist,0,sizeof(dist));
    queue<ll> q;
    q.push(start); 
    visited[start]=true;
    dist[start]=0;
    while(!q.empty())
    {
        ll s=q.front(); 
        q.pop(); 
        for(ll j=0;j<(ll)adj[s].size();j++)
        { 
            if(!visited[adj[s][j].dest ] )//here we are visiting wt not that nodes. 
                {
                    visited[adj[s][j].dest ]=true;
                    q.push(adj[s][j].dest );
                    dist[adj[s][j].dest]=adj[s][j].weight+dist[s]; 
                }
        }
    }
    return max_element(dist+1,dist+v+1)-dist;
}
int main()
{ 
    ll t;
    cin>>t;
     while(t--)
     { 
          ll v;
          cin>>v; 
          for(int i=1;i<=v;i++)
             adj[i].clear();
             ll ans;
          for(ll i=1;i<v;i++)//v-1 edges so v-1 times loop makes.
          {
              ll a,b,w; 
              cin>>a>>b>>w;
              node temp;
              temp.dest=b;temp.weight=w;
              adj[a].push_back(temp);
              temp.dest=a;
              adj[b].push_back(temp);
          }
              ll index=bfs(1,v);//leaf farthest of 1 get
              ll index2=bfs(index,v);//from1 leaf to find another leaf farthest
              ans=dist[index2];//leaf to leaf dist stored.
             if(ans<=100)cout<<0;
               else if( ans>100 && ans<=1000)cout<<100;
               else if(ans>1000 && ans<=10000) cout<<1000;
               else cout<<10000;
               cout<<" "<<ans<<endl;
     }
     return 0;
}