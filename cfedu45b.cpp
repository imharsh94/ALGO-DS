#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int a[n+1];

    
    for(int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    
    sort(a,a+n);

    for(int i=0; i<n; i++)
    {
        if(upper_bound(a,a+n,a[i])-a < n)
            
    }

    cout<<n-count<<'\n';
    return 0;
}