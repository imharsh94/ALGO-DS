#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long n,m,a,b,build,destroy,bc,dc;
   cin>>n>>m>>a>>b;

    destroy = n % m;
    build = m - (n % m);
    bc = build * a;
    dc = destroy * b;
    cout<<min(bc,dc)<<endl;
    return 0;
}