#include<bits/stdc++.h>
using namespace std;

typedef long long  ll;
typedef pair< int,int > pii;

int x,m,n;

int solve()
{
    cin>>x>>n>>m;
    int ti=n*60+m;
    for(int i=0;;i++)
    {
        int h = ti/60;
        int m = ti % 60;
        if(h/10 == 7 || h % 10 == 7 || m/10 == 7 || m%10 == 7)
            {
                
                return cout<<i<<endl,0;
            }   
         ti = (ti - x + 1440) % 1440;        
    }
   // return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
   
    return 0;

}