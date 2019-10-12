#include<bits/stdc++.h>
using namespace std;

vector< int > v[100010];
int vis[100010];


void dfs(int s)
 {
  vis[s]=1;
  
  for(int i =0 ;i< v[s].size(); i++)
   {
     if(vis[v[s][i]] == 0)
      dfs(v[s][i]);
   }
 }


int main()
{
int t;
cin>>t;
while(t--)
 {
   int n,a,b; cin>>n;
   int d; cin>>d;
   
   memset(vis,0,sizeof(vis));
   for(int i=0 ; i<100010 ; i++)
    {
      fill(v[i].begin(),v[i].end(),0);
    }
   
   for(int i=0 ; i<d; i++)
    {
     cin>>a>>b;
     v[a].push_back(b);
     v[b].push_back(a);
    }
    int ans=0;
    for(int i=0 ; i<n ; i++)
     {
       if(vis[i]==0)
       {
       dfs(i);
       ans++;
       }
      
     }
     cout<<ans<<endl;
 }
return 0; 
}
