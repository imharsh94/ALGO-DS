#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,a,m,temp=-1,index;
    cin>>n>>m;
    int c[105],w[105];
    memset(c,0,sizeof(c));
    memset(w,0,sizeof(w));
    
    for(int i=1; i<=m; i++)
    {
	for(int j=1; j<=n; j++)
	{
	    cin>>a;
	    if(a > temp)
	    {
		temp = a;
		index = j;
	    }
	}
	temp=-1;
	c[index]++;
//	w[i] = index;
    }
    
    int ans = 0;
    for(int i=1; i<=n ; i++)
    {
	if(c[i] > c[ans])
	    ans = i;
    }

    cout<<ans<<endl;
    return 0;
}
