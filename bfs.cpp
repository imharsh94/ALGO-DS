#include<bits/stdc++.h>
using namespace std;
vector< int > adj[20];
bool vis[20];

int main()
{

    int nodes,edges,x,y;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
	cin>>x>>y;
	adj[x].push_back(y);
	adj[y].push_back(x);
    }

    queue<int> q;

    q.push(1);
    vis[1] = true;
    while(!q.empty())
    {
	int p = q.front();
	q.pop();
	cout<<p<<" ";
	
	for(int i=0; i<adj[p].size(); i++)
	{
	    if(vis[adj[p][i]] == false)
	    {
		q.push(adj[p][i]);
		vis[adj[p][i]] = true;
	    }
	}
    }
    
    return 0;
}
