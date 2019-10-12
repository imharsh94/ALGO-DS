#include<bits/stdc++.h>
#define ll long long
using namespace std;
int primes[10000001];

int f(int n)
{

    int res=n;
    for(int i=2; i*i<=n; i++)
	if(n%i == 0)
	{
	    while(n%i == 0)
		n/=i;
	    res -=res/i;
	}
    if(n>1)
	res -=res/n;
    return res;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
	int n; cin>>n;
	cout<<f(n)<<'\n';
    }
    
    return 0;
}
