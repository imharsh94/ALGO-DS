//spoj
#include<bits/stdc++.h>
using namespace std;

vector< int > g[15010];
bool visited[15010];


void dfs(int s)
{
  visited[s] = true;
  for(int i=0; i< g[s].size(); i++)
   {
     if(visited[g[s][i]] == false)
      dfs(g[s][i]);
   }
}

void initialize()
{
 for(int i=0 ; i<15010 ; i++)
  visited[i] = false;
}

int main()
{
int n,m,x,y,c=0;
cin>>n>>m;

for(int i=0; i<m ;i++)
 {
  cin>>x>>y;
  g[x].push_back(y);
  g[y].push_back(x);
 }
 
initialize();
 
for(int i=1 ; i<= n ; i++)
 {
  if(visited[i] == false)
  {
   dfs(i);
   c++;
  }
 }
 
 if(c == 1)
  cout<<"YES\n";
 else
  cout<<"NO\n"; 

 return 0;
}
