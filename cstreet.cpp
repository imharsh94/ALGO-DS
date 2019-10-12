#include<bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<ll,int> pii;
bool marked[1009];
vector <pii> adj[1009];

ll prim(int x)
{
    priority_queue<pii, vector<pii>, greater<pii>> q;
    int y;
    ll minc=0;
    pii p;
    q.push(make_pair(0,x));
    while(!q.empty())
    {
	p = q.top();
	q.pop();
	x = p.second ;

	if(marked[x] == true)
	    continue;

	minc += p.first;
	marked[x] = true;

	for(int i=0; i<adj[x].size(); i++)
	{
	    y = adj[x][i].second;
	    if(marked[y] == false)
		q.push(adj[x][i]);
	}
    }
    return minc;
}



int main()
{
    int t; cin>>t;
    while(t--)
    {
	int nodes,edges,x,y,cost;
	ll weight, mincost;
	cin>>cost;
	cin>>nodes>>edges;

	for(int i=0; i<edges; i++)
	{
	    cin>>x>>y>>weight;
	    adj[x].push_back(make_pair(weight*cost,y));
	    adj[y].push_back(make_pair(weight*cost,x));
	}

	mincost = prim(1);
	cout<<mincost<<'\n';

	for(int i=0; i<1009; i++)
	    adj[i].erase(adj[i].begin(),adj[i].end());
	
    }
    return 0;
}
