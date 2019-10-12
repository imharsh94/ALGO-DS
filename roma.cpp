#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a,c=0,ans=0;
    cin>>n>>k;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        while(a>0)
        {
            int r = a%10;
            if(r==4 || r==7)
                c++;
            a = a/10;
        }
        if(c<=k)
            ans++;
        c=0;
    }
    cout<<ans<<'\n';
    return 0;
}