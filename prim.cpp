#include<bits/stdc++.h>
#define ll long long
const int MAX = 1e5 + 5;
using namespace std;

typedef pair< ll,int > pii;
bool marked[MAX];
vector< pii > adj[MAX];


ll prim(int x)
{
    priority_queue< pii, vector< pii >, greater< pii > > Q;
    int y;
    ll mincost=0;
    pii p;
    Q.push(make_pair(0,x));
    while(!Q.empty())
    {
	p = Q.top();
	Q.pop();
	x = p.second;

	if(marked[x] == true)
	    continue;

	mincost += p.first;
	marked[x] = true;

	for(int i=0; i<adj[x].size(); i++)
	{
	    y = adj[x][i].second;
	    if(marked[y] == false)
		Q.push(adj[x][i]);
		    
	}
    }
    return mincost;
}


int main()
{
    int nodes,edges,x,y;
    ll weight,mincost;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
	cin>>x>>y>>weight;
	adj[x].push_back(make_pair(weight,y));
	adj[y].push_back(make_pair(weight,x));
    }
    mincost = prim(1);
    cout<<mincost<<'\n';
    return 0;
}
