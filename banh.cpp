#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,q,zero=0,one=0,a,l,r,mod=1e9+7,p[200008];
    cin>>n>>q;
    string s;
    cin>>s;

    vector< pair< int,int > > v;

    v.push_back(make_pair(0,0));

    for(int i=0; i<n; i++)
    {
    
        if(s[i]=='1')
            one++;
        else if(s[i]=='0')
            zero++;
        v.push_back(make_pair(one,zero));
        
    }

    p[0]=1;
	for(int i=1;i<=1e5;i++) p[i]=(p[i-1]*2)%mod;

    while(q--)
    {
        ll o,z,sumones=0ll,sumzeroes=0ll;
        cin>>l>>r;
         o = v[r].first - v[l-1].first;
         z = v[r].second - v[l-1].second;

        //cout<<o<<" "<<l<<'\n';

         sumones = (p[o] - 1)%mod;
         sumzeroes = sumones*((p[z] - 1) %mod)%mod;

        cout<<(sumones+sumzeroes)%mod<<'\n';
        //ll k = pow(2,100);
        //cout<<pow(2,100)<<'\n';
        //cout<<k<<endl;

    }

    return 0;
}