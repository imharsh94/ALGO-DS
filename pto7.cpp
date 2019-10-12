#include<bits/stdc++.h>
using namespace std;

vector< int > v[10010];
bool vis[10010];
int parent[10010];

bool dfs(int x)
{
    vis[x]=1;
    for(int i=0; i<v[x].size(); i++)
    {
	if(vis[v[x][i]] == 0)
	{
	    parent[v[x][i]] = x;
	    dfs(v[x][i]);
	}
	else if(vis[v[x][i]] && v[x][i] != parent[x])
	    return false;
    }
    return true;
}

int main()
{
    int n,m,x,y;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
	cin>>x>>y;
	v[x].push_back(y);
	v[y].push_back(x);
    }

    parent[1]=0;

    for(int i=1; i<=n; i++)
    {
	if(!vis[i])
	    if(!dfs(i)) 
	      return cout<<"NO\n",0;
		
    }
  
    cout<<"YES\n";
    return 0;
}
