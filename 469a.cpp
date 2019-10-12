#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,a,ans=0;
    cin>>l>>r>>a;
    
    int x = max(l,r);
    int y = min(l,r);

    while(a>0 && x>y)
    {
	a = a-1;
	y = y+1;
    }
    ans = 2*y;
    if(a>0 &&  a%2 != 0)
	a=a-1;
	
    
    cout<<ans+a<<'\n';
    return 0;
}
