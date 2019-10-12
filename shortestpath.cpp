#include<bits/stdc++.h>
using namespace std;



int main()
{
 int t; cin>>t;
 while(t--)
 {
   int n,m,a,b;
   
   cin>>n>>m;
   vector< int > adj[1200];
   int dist[1200];
   bool vis[n]={0};
   memset(dist,-1,sizeof(dist));
   
   for(int i=0;i<m;i++)
   {  
     cin>>a>>b;
     adj[a].push_back(b);
     adj[b].push_back(a);
   }
   int st; cin>>st;
   
    int level =0;
  queue < int > q;
  q.push(st);
  dist[st]=0;
  vis[st] = true;
  while(!q.empty())
  {
    int p = q.front();
    q.pop();
    for(int i=0; i<adj[p].size();i++)
      {
        if(vis[adj[p][i]] == false )
        {
          dist[adj[p][i]] = level +6; 
          q.push(adj[p][i]);
          vis[adj[p][i]] = true;
        }
      }
      level += 6;
  }
   
   for(int i=1;i<=n;i++)
   {
     if(i != st )
       cout<<dist[i]<<" ";
      
  
   }
   
  
  
 }
return 0;
}
