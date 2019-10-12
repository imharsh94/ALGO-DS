#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int s[n],w[m];

    for(int i=0;i<n;i++)
        cin>>s[i];
    
    sort(s,s+n);

    for(int i=0; i<m;i++)
        cin>>w[i];

    sort(w,w+m);

    int ans=-1;

    

    for(int i=s[n-1]; i<=w[0]-1; i++)
    {
        if(2*s[0] <= i)
        {
            ans = i;
            break;
        }
    }
    cout<<ans<<'\n';
    return 0;
}