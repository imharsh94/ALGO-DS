#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX = 1e5+5;
int id[MAX],nodes,edges;
int size[MAX];
pair<ll, pair<int,int>> p[MAX];


void initialize()
{
    for(int i=0; i<MAX; ++i)
    {
	id[i] = i;
	size[i] = 1;
    }
}

int root(int x)
{
    while(id[x] != x)
    {
	id[x] = id[id[x]];
	x = id[x];
    }
    return x;
}


void uni(int x,int y)
{
    int p = root(x);
    int q = root(y);
    if(p == q)
	return;
    if(size[p]< size[q])
    {
	id[p]=id[q];
	size[q] += size[p];
    }
    else
    {
	id[q] = id[p];
	size[p] += size[q];
    }
}


ll kruskal(pair<ll,pair<int,int>> p[])
{
    int x,y;
    ll cost,mincost=0;

    for(int i=0; i<edges; i++)
    {
	x = p[i].second.first;
	y = p[i].second.second;
	cost = p[i].first;
	if(root(x) != root(y))
	{
	    mincost += cost;
	    uni(x,y);
	}
    }
    return mincost;
}

int main()
{
    int x,y;
    ll weight,cost,mincost=0;
    
    initialize();
    cin>>nodes>>edges;

    for(int i=0; i<edges; ++i)
    {
	cin>>x>>y>>weight;
	p[i] = make_pair(weight,make_pair(x,y));
    }

    sort(p,p+edges);

    mincost = kruskal(p);

    cout<<mincost<<endl;
    
    return 0;
}
