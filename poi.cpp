#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,l,r,c=0; cin>>n>>m;
    int a[m+10];
    memset(a,0,sizeof(a));
    while(n--)
    {
	cin>>l>>r;
	fill_n(a+l,r-l+1,-1);
    }
    for(int i=1;i<=m;i++)
	if(a[i]==0)
	    c++;
    cout<<c<<'\n';
    for(int i=1;i<=m;i++)
	if(a[i] == 0)
	    cout<<i<<" ";
    cout<<endl;
    return 0;
}
