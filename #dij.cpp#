#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pll pair< ll,ll >
#define ff first
#define ss second
#define pb push_back

const int MAX = 1e6 + 5 ; 
const int MAX_DIST = 1e9 + 7;
bool visited[MAX];
ll dist[MAX];

vector< pll > adj[MAX];

void init()
{
    for(ll i=0; i< MAX; i++)
    {
        dist[i] = MAX_DIST;
        visited[i] = false;
    }  
}

void dijkstra(ll source)
{
    init();
    multiset<pll> Q;
    dist[source] = 0;
    Q.insert(mp(0,source));
    while(!Q.empty())
    {
        pll t = *Q.begin();
        Q.erase(Q.begin());
        ll x = t.ss;

        if(visited[x])
          continue;
        
        visited[x] = true;

        for(ll i=0; i<adj[x].size(); i++)
        {
            ll y= adj[x][i].ss;
            ll weight = adj[x][i].ff;

            if(dist[y] > dist[x] + weight)
            {
                dist[y] = dist[x] + weight;
                Q.insert(mp(dist[y],y));
            }

        }
    }
}


int main()
{
    ll nodes,edges,x,y;
    ll weight, minimumCost;
    cin>>nodes>>edges;

    for(ll i=0; i<edges; i++)
    {
        cin>>x>>y>>weight;
        adj[x].pb(mp(weight,y));

    }

 dijkstra(1);

    for(int i=2 ; i<= nodes; i++)
        cout<<dist[i]<<" ";
    
    return 0;
    
   
 
   
    
}
