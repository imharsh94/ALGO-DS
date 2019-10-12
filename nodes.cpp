// hackerearth example dfs
 #include<bits/stdc++.h>
 using namespace std;
 
 vector< int > v[100010];
 bool vis[100010];
 
 
 void dfs(int s)
  {
   vis[s] = true;
   for(int i=0; i<v[s].size(); i++)
     if(vis[v[s][i]] == false)
       dfs(v[s][i]);
  }
 
 
 
 
 void initialize()
  {
    for(int i=0; i<100010; i++)
      vis[i] = false;
  }
 
 int main()
  {
   int nodes,edges,x,y,count=0,z;
   cin>>nodes>>edges;
   
   for(int i=0; i<edges; i++)
    {
      cin>>x>>y;
      v[x].push_back(y);
      v[y].push_back(x);
    }
    
    initialize();
    cin>>z;
    dfs(z);
    
    for(int i=1; i<= nodes; i++)
     {
       if(!vis[i])
        count++;
     }
     
     cout<<count<<endl;
   return 0;
  }
