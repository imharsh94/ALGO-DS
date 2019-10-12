//hackerearth mancunian color tree
#include<bits/stdc++.h>
#define SIZE 100005
using namespace std;

int n,C,col[SIZE],ans[SIZE];
vector< int > adj[SIZE];
stack< int > st[SIZE];

void dfs(int v){
 
  if(st[col[v]].empty())
  {
   ans[v] = -1;
  }
  else
  {
   ans[v] = st[col[v]].top();
   
  }
  
  st[col[v]].push(v);
  
  for(int i=0 ; i<adj[v].size() ; i++)
   {
     int vv = adj[v][i];
     dfs(vv);
   }
   
  st[col[v]].pop();
}

int main()
{
 cin>>n>>C;
 for(int i=2;i<=n;i++)
  {
   int p;
   cin>>p;
   adj[p].push_back(i);
  }
  
  for(int i=1;i<=n;i++)
   cin>>col[i];
   
  dfs(1);
  
  for(int i=1 ; i<=n ; i++)
   cout<<ans[i]<<' ';
  
  
return 0;
}
