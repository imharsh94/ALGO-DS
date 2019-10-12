#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,i=0,flag=0;
    cin>>n>>m>>k;

    int e[n];
    for(int i=0; i<n;i++)
        cin>>e[i];
    sort(e,e+n,greater<int>());

    if(m <= k)
        return cout<<"0\n",0;
    else
    {
      int t = k;
      while(i<n)
      {
          if(t+e[i]-1 >= m)
          {
              flag=1;break;
          }
          else
          {
              t = t+ e[i]-1;
              i++;
          }
      }

    }
    if(flag)
       cout<<i+1<<'\n';
    else
        cout<<"-1\n";
    return 0;
}