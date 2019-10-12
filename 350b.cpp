#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,k,i=1,t=0,ans;
    cin>>n>>k;
    int idx[n+10];
    
    for(int i=1; i<=n; i++)
	cin>>idx[i];

    while(k-t>0)
    {
	ans = k-t;
	t = t+i;
	i++;
    }

    cout<<idx[ans]<<'\n';
    return 0;
}
