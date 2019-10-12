#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int x,y,ans=0;
    cin>>x>>y;

    if(x>y && -y+1>=x) ans = -4*y;
    else if(x>=y && x>-y+1) ans = 4*x-3;
    else if(-x>y && -x+1 >y) ans = 4*(-x)-1;
    else if(y>x && -x<y+1) ans = 4*y - 2;
    cout<<ans<<'\n'; 
    return 0;
}