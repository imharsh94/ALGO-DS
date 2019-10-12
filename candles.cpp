#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];

    for(int i=0 ; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    int y = upper_bound(a,a+n,a[n-1]) - a;
    int z = lower_bound(a,a+n,a[n-1]) - a;

    cout<<y-z<<'\n';
    return 0;
}