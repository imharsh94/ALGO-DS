#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,y,i,b;
    cin>>n;
    int a[4], c[4][5000];
    memset(c,0,sizeof c);
    memset(a,0,sizeof a);
    for(int i=0; i<n; i++)
    {
        cin>>b;
        a[b]++;
        c[b][a[b]] = i+1;
    }
    y = min(a[1],min(a[2],a[3]));
    cout<<y<<'\n';
    for(int i=1; i<=y; i++)
        cout<<c[1][i]<<' '<<c[2][i]<<" "<<c[3][i]<<"\n";
    
    return 0;
}