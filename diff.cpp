#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d=0,r,ans;
    cin>>n;
    int a[n];
    cin>>a[0];

    
    for(int i = 1; i < n; i++)
    {
       cin>>a[i];
       if(a[i]-a[i-1] > d)
            d = a[i] - a[i-1];
    }
    ans = INT_MAX;
    r=d;
    for(int i=1; i<n-1; i++)
    {
        if(a[i+1] - a[i-1] >= d)
            r = a[i+1] - a[i-1];
        
        if(r < ans)
            ans = r;
    }

    cout<<ans<<'\n';
    return 0;
}