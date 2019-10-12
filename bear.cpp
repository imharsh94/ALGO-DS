#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,c,ans=0;
    cin>>n>>c;
    int d[n];

    for(int i=0; i<n; i++)
        cin>>d[i];

    
    for(int i = 0; i < n-1; i++)
    {
        if(d[i] - d[i+1] - c > 0)
        {
            if(d[i] - d[i+1] - c > ans)
                ans = d[i] - d[i+1] - c;
        }
    }
    cout<<ans<<"\n";
    return 0;
}