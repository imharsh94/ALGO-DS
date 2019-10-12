// bishu and girls hackerearth (bfs)
 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
  {
    int level[100010];
    bool vis[100010];
    vector< int > v[100010];
    
    int n,x,y;
    cin>>n;
    for(int i=0; i<n-1; i++)
     {
       cin>>x>>y;
       v[x].push_back(y);
       v[y].push_back(x);
     }
    
    queue< int > q;
    q.push(1);
    level[1] = 0;
    vis[1] = true;
    while(!q.empty())
      {
        int p = q.front();
        q.pop();
        
        for(int i=0; i< v[p].size(); i++)
         {
           if(vis[v[p][i]] == false)
            {
              level[v[p][i]] = level[p] + 1;
              q.push(v[p][i]);
              vis[v[p][i]] = true ;
            }
         }
      }
    int query;
    cin>>query;  
    int dist = INT_MAX;
    int node = 0;
    while(query--)
      {
        int i;
        cin>>i;
        if(level[i] < dist)
        {
          dist = level[i];
          node = i;
        }  
        else if(dist == level[i])
        {
          if(i < node)
            {
            
            node = i;
            }
         
        }
          
      }
    cout<<node<<endl;
    return 0;
  }
