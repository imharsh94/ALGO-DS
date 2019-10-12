#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
    string s,ans;
    cin>>s;

    for(int i=0; i<s.length()-1;i++)
    {
        if(s[i] != s[i+1])
            ans = ans + s[i];
    }
    if(s[s.length()-1] != s[s.length()-2])
        ans = ans + s[s.length()-1];

    cout<<ans<<'\n';
    }
    return 0;
}