#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,ans=0;
    cin>>n>>m>>k;
    int a[m+1];
    bitset< 32> b1;
    for(int i=0; i<m+1; i++)
	cin>>a[i];
    for(int i=0; i<m; i++)
    {
	int c = a[m]^a[i];
	b1 = c;
	if(b1.count()<= k)
	    ans++;
    }
    cout<<ans<<'\n';
    return 0;
}
