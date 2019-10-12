#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drinks = (k*l)/nl;
    int salt = p/np;
    int lime = (c*d);
    int ans = min(drinks,salt);
     ans = min(ans,lime);
    
    cout<<ans/n<<endl;
    return  0;
}
