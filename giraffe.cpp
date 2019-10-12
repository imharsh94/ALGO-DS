#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
   

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans= 0;

    

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            
            if(a[j]-a[i] == j-i  && (a[i]==1 || a[j]==1000))
               { ans = max(ans,j-i);}
            else if(a[j]-a[i] == j-i)
                ans = max(ans,j-i-1);
        }
    }
    cout<<ans<<'\n';
    return 0;
}