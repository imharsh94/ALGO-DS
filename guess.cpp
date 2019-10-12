#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int  mx = 2e9;
    int  mn = -2e9;


    int n;
    cin>>n;

    while(n-- > 0)
    {
        string s; cin>>s;
        int x; cin>>x;
        string ans; cin>>ans;

        if(ans == "N")
        {
            if(s==">=") s="<";
            else if(s == "<") s=">=";
            else if(s == "<=") s=">";
            else s="<=";
        }

        if(s == ">=") mn = max(mn,x);
        else if(s == ">") mn = max(mn,x+1);
        else if(s == "<=")mx = min(mx,x);
        else mx = min(mx,x-1);
    }

    if(mn<=mx) cout<<mn<<'\n';
    else cout<<"Impossible\n";
    return 0;
}