#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,ans=INT_MAX,t=0;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<a[i]; j++)
        {
            cin>>x;
            t = t + x*5 + 15;
        }
         
         if(t < ans)
            ans = t;
        t=0;
    }

    cout<<ans<<endl;
    return 0;
}