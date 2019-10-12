#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int t[n];

    for(int i=0; i<n; i++)
        cin>>t[i];

    sort(t,t+n);

    int pos = upper_bound(t,t+n,5-k) - t;

    if(pos == n)
        pos--;
    if(t[pos] > (5-k))
        pos--;

    cout<<(pos+1)/3<<'\n';

    return 0;
}