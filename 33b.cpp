#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,tot=0,no,ans;
    set< int > s;

    for(int i=0; i<=7; i++)
    {
	k=i;
	no = k+1;
	tot = 0;
	while(no > 0)
	{
	    tot = tot + pow(2,k);
	    no--;k++;
	}
	s.insert(tot);
    }

    // for(auto x:s)
//	cout<<x<<'\n';
    int n;
    cin>>n;

    for(auto x:s)
    {
	if(n % x == 0)
	    ans = x;
    }

    cout<<ans<<'\n';
    return 0;
}
