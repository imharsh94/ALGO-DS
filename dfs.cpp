#include<bits/stdc++.h>
using namespace std;
vector< int > v[10004];
bool vis[10004];
int parent[10004];

void dfs(int n)
{
    queue< int > st;
    st.push(n);
     vis[n] = true;

    while(!st.empty())
    {
	int t = st.front();
	st.pop();
	cout<<t<<" ";


	   for(int i=0; i<v[t].size();i++)
	   {
	    
	     if(!vis[v[t][i]])
	      {
	    	st.push(v[t][i]);
	        parent[v[t][i]] = t;
		vis[v[t][i]] = true;
	      }
	     
	     //  else if(vis[v[t][i]] && v[t][i] != parent[t])
		 //	 return false;
	   }
	
    }

    // return true;
}



int main()
{
    int nodes,edges,x,y;
    cin>>nodes>>edges;
    
    for(int i=0; i<edges; i++)
    {
	cin>>x>>y;
	v[x].push_back(y);
	v[y].push_back(x);
    }
    parent[1]=0;
   
    dfs(1);
	
    
   
    return 0;
}
