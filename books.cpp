#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=1,q; cin>>n;
    int a[n],ans[n];
    map< int,int > mp;
    memset(ans,0,sizeof(ans));

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]] = c;
        c++;
    }
    int vol=0,id=0;

    for(int i=0; i<n; i++)
    {
        cin>>q;
        if(mp[q]< id)
            ans[i]=0;
        else
        {
            ans[i] = mp[q] - vol;
            vol = vol + (mp[q] - id);
            id = mp[q];
        }
    }

    for(int i=0; i<n; i++)
        cout<<ans[i]<<" ";

    return 0;
}
