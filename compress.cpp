#include<bits/stdc++.h>
#define ii int
#define ll long long
using namespace std;

int main()
{
    vector<ii>v;
    ll n,a,b,sum=0,com,tot=0,c=0; cin>>n>>com;
    for(ii i=0; i<n; i++)
    {
	cin>>a>>b;
	sum += b;
	tot += a;
	v.push_back((a-b));
    }

    sort(v.begin(),v.end(),greater<ii>());

    if(sum > com)
	return cout<<"-1\n",0;
    
    for(ii i=0; i<n; i++)
    {
	if(tot > com)
	{
	    tot -= v[i];
	    c++;
	}
	else
	    break;
    }
    cout<<c<<'\n';
    return 0;
}
