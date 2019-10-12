#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d1,d2,d3,ans;
    cin>>d1>>d2>>d3;
    ans = min(2*d1+2*d2,d1+d2+d3);
    ans = min(ans,2*d1+2*d3);
    ans = min(ans,2*d2+2*d3);

    cout<<ans<<'\n';
    return 0;
}
