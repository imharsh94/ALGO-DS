#include<bits/stdc++.h>
using namespace std;
vector< int > v[2050];
int g[2050];



bool dfs(int n)
{
    stack< int > st;
    st.push(n);
   

    while(!st.empty())
    {
	int t = st.top();
	st.pop();
	


	 for(int i=0; i<v[t].size();i++)
	  {
	      
		  
	     if(g[v[t][i]] == 0)
	      {
		g[v[t][i]] = -g[t];
	    	st.push(v[t][i]);
	       
	      }
	     else if(g[t] == g[v[t][i]]) return false;
	     
	  }
	
    }

     return true;
}


int main()
{
    int t,c=1,nodes,edges,x,y; cin>>t;

    while(t--)
    {
	bool  flag=1;
	memset(g,0,sizeof(g));

	memset(v,0,sizeof(v));
	
	cin>>nodes>>edges;

	for(int i=0;i<edges;i++)
	{
	    cin>>x>>y;
	    v[x].push_back(y);
	    v[y].push_back(x);
	}

	for(int i=1; i<=nodes; i++)
	{
	    if(!g[i])
	    {
		g[i] = 1;
		flag=flag && dfs(i);
		    
	    }
	}

	if(!flag)
	{
	    cout<<"Scenario #"<<c<<":\n";
	    cout<<"Suspicious bugs found!\n";
	}
	else
	{
	     cout<<"Scenario #"<<c<<":\n";
	    cout<<"No suspicious bugs found!\n";
	}

	c++;
    }
    return 0;
}
