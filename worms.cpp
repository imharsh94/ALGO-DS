#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool flag=0;
    int n,x,y,z; cin>>n;
    int a[n];
    for(int& e: a) cin>>e;

    for(int i=0; i<n; i++)
        {
            
         for(int j=0; j<n; j++)
           {
               if(i == j)continue;
               for(int k=0 ; k<n ; k++)
               {
                   if(i !=j && j != k && i!=k)
                   {
                   if(a[i] == a[j]+a[k])
                   {
                       flag=1;
                        x=i;y=j;z=k;
                        break;
                   }
                   }
               }
               if(flag) break;
           }
           if(flag) break;
        }

        if(flag) cout<<x+1<<" "<<y+1<<" "<<z+1<<'\n';
        else cout<<-1<<endl;
    return 0;
}