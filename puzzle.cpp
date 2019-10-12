#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,min=INT_MAX;
    cin>>n>>m;
    int f[m];

    for(int i=0; i<m; i++)
        cin>>f[i];
    sort(f,f+m);
    
    for(int i=0 ; i<=m-n; i++)
    {
        if((f[i+n-1] - f[i]) < min)
            min = f[i+n-1] - f[i];
    }

    cout<<min<<'\n';
    return 0;
}