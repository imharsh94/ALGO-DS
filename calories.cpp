// hackerrank calories count
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int cal[n],ans=0,j=0;

    for(int i=0; i<n; i++)
        cin>>cal[i];

    sort(cal,cal+n);

    for(int i=n-1; i>=0; i--)
    {
        ans += pow(2,j)*cal[i];
        j++;
    }

    cout<<ans<<'\n';
    return 0;
}