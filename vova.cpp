#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,l,v,start,end;
    cin>>t;
    

    while(t--)
    {
        cin>>l>>v>>start>>end;
        long long int ans = l/v;
        
        ans = ans - (end/v - (start-1)/v);

        cout<<ans<<'\n';
    }


    return 0;
}