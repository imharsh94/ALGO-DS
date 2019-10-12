#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,k;
	cin>>n>>k;
	set< ll > s;
	int flag=0;
	for(ll i=1 ; i<=k ; i++)
	{
		ll rem = n%i;
		if(s.count(rem) == 0)
			s.insert(rem);
		else
		{
			flag=1;
			break;

		}
	}

	if(flag)
		cout<<"No\n";
	else
		cout<<"Yes\n";

	return 0;
}