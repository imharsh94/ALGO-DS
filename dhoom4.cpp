//hackerearth dhoom4  (bfs)
#include<bits/stdc++.h>
using namespace std;

 int main()
  {
    int a[1005];
    int owkey,reqkey,i,n;
    cin>>owkey>>reqkey;
    cin>>n;
    for(i=0; i<n; i++)
      cin>>a[i];
    int ans[100010];
    memset(ans,-1,sizeof(ans));
    queue< int > q;
    q.push(owkey);
    ans[owkey]= 0;
    while(!q.empty())
      {
        int val = q.front();
        q.pop();
        if(val == reqkey)
         break;
        for(i=0;i<n;i++)
          {
            int to = a[i];
            to = to*val;
            to%=100000;
            if(ans[to] == -1)
              {
                ans[to] = ans[val]+1;
                q.push(to);
              }
          }
      }
      printf("%d\n",ans[reqkey]);
      return 0 ;
  }
