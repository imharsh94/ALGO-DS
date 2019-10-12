#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,l,c=1,r,ans=0;
    cin>>n>>x;

    for(int i=0; i<n ; i++)
    {
        cin>>l>>r;

        while( c<= l)
        {
            c = c+ x;
        }
        c = c - x;
        ans = ans + (r-c + 1);
        c = r+1;
    }

    cout<<ans<<'\n';
    return 0;
}