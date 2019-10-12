#include<bits/stdc++.h>
using namespace std;
char g[200][200];
int dist[200][200];

int n,m;


bool range(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m)
	return true;
    else
	return false;
}

int bfs(int i,int j,int d)
{
    
    
    
    queue< pair< pair< int,int >, int > > q;
    q.push({{i,j},d});
    dist[i][j] = d;
    while(!q.empty())
    {
	int x = q.front().first.first;
	int y = q.front().first.second;
	int dis = q.front().second;

	
	q.pop();
	
	
	
	if(range(x+1,y) && dis+1 < dist[x+1][y])
	{
	    q.push({{x+1,y},dis+1});
	    dist[x+1][y]=1+dis;
	}
	
	if(range(x-1,y) && dis+1 < dist[x-1][y])
	{
	    q.push({{x-1,y},dis+1});
	    dist[x-1][y]=1+dis;
	}
	
	if(range(x,y+1) && dis+1 < dist[x][y+1])
	{
	    q.push({{x,y+1},dis+1});
	    dist[x][y+1]=1+dis;
	}
	
	if(range(x,y-1) && dis+1< dist[x][y-1])
	{
	    q.push({{x,y-1},dis+1});
	    dist[x][y-1]=1+dis;
	}
	    
    }
    
}


int main()
{
    int t; cin>>t;
    while(t--)
    {
	 
	cin>>n>>m;

	for(int i=0; i<n; i++)
	    for(int j=0; j<m; j++)
		dist[i][j]=9999;
	
	memset(g,0,sizeof(g));

	for(int i=0; i<n; i++)
	    for(int j=0; j<m; j++)
		cin>>g[i][j];


	
	for(int i=0; i<n; i++)
	    for(int j=0; j<m; j++)
	    {
	       	
		if(g[i][j]=='1')
		    bfs(i,j,0);
	    }

	
	for(int i=0; i<n; i++)
	{
	    for(int j=0; j<m; j++)
		cout<<dist[i][j]<<" ";
	    cout<<'\n';
	}
    }
    
    return 0;
}
