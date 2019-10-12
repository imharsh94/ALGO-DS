#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    assert(1<=t && t<= 100);
    cin.ignore();
    while(t--)
    {
        int a[100]={0};
        string tmp;
        getline(cin,tmp);
        stringstream ss;
        ss.clear();
        ss.str("");
        ss<<tmp;
        int n=0;
        while(ss>> a[n++]);
        n-=2;
        assert(n <=50);
        bool seen=0;
        int ans=0;
        for(int i=0;i<n+1;i++)
          if(a[i]==n)
             if(seen)
               ans = max(ans,a[i]);
             else
                seen =1;
          else
            ans = max(ans,a[i]);
        cout<<ans<<'\n';            
    }
    return 0;
}