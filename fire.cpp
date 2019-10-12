 // hackerearth we are on fire (bfs)
 #include<bits/stdc++.h>
 #define pii pair< int,int >
 using namespace std;
 
  int main()
   {
    int n,m,que,c=0;
    scanf("%d%d%d",&n,&m,&que);
    int a[n+100][m+100];
    
    for(int i=1; i<=n; i++)
      {
       for(int j=1 ; j<=m; j++)
         {
           scanf("%d",&a[i][j]);
            c += a[i][j];
         }
      }
    
      queue< pii > q;
      while(que--)
       {
       int t1,t2;
        scanf("%d%d",&t1,&t2);
        q.push(make_pair(t1,t2));
        
        while(!q.empty())
         {
           pii z = q.front();
           q.pop();
           int x = z.first ; 
           int y = z.second ;
           
           if(a[x][y] == 0)
             {
             break;
             }
           if(a[x][y] == 1)
             {
             c--;a[x][y]=0;
             }
           if(x+1<=n && a[x+1][y] == 1)
             {
             q.push(make_pair(x+1,y));c--;a[x+1][y]=2;
             }
           if(x-1>=1 && a[x-1][y] == 1)
             {
             q.push(make_pair(x-1,y));c--;a[x-1][y]=2;
             }
           if(y+1<=m && a[x][y+1] == 1)
             {
             q.push(make_pair(x,y+1));c--;a[x][y+1]=2;
             }
           if(y-1>=1 && a[x][y-1] == 1)
             {
             q.push(make_pair(x,y-1));c--;a[x][y-1]=2;
             }
         }
         
        printf("%d\n",c);
       }     
           
   
     
    return 0;
    }
