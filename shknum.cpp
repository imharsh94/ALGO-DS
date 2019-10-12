#include<bits/stdc++.h>
using namespace std;

vector< int > v;

void precalc()
{
    for(int i=1; i<=30; ++i)
        for(int j=0; j<i; j++)
            v.push_back((1<<i) + (1<<j));

    sort(v.begin(),v.end());
}

void solve()
{
    int n;
    cin>>n;

    vector< int >:: iterator it = lower_bound(v.begin(),v.end(),n);

    int ans = *it - n;

    if(it != v.begin())
        ans = min(ans,n - *(--it));

    cout<<ans<<'\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precalc();

    int t;
    cin>>t;

    while(t--)
        solve();

    return 0;
}