#include<bits/stdc++.h>
using namespace std;
int a[10010];
bool vis[10010];

int dfs(int x)
{
    if(vis[x] == true)
	return x;
    vis[x] = true;
    dfs(a[x]);
    
}

int main()
{
    int n; cin>>n;
    

    for(int i=1; i<=n; i++)
	cin>>a[i];

    for(int i=1; i<=n; i++)
    {
	memset(vis,0,sizeof(vis));
	cout<<dfs(i)<<" ";
    }
    
    return 0;
}
