// codeforces educational round 53
#include<bits/stdc++.h>
using namespace std;
char s[200008];
int sx[200008],sy[200008];

int main()
{
    int n,i,j,x,y,k;
    cin>>n;
    scanf("%s",s+1);
    cin>>x>>y;

    if(abs(x)+abs(y) > n ||(n+x+y)&1)
    {
        cout<<-1<<'\n';
        return 0;
    }

    for(int i=1; i<=n; i++)
    {
        sx[i] = sx[i-1] + (s[i]=='L'?-1:(s[i]=='R'?1:0));
        sy[i] = sy[i-1] + (s[i]=='D'?-1:(s[i]=='U'?1:0));
    }

    int ans = 1<<30;
    for(int i=0,j=0; i<=n; i++)
    {
        while(j<=n && abs(sx[i]+sx[n]-sx[j]-x)+abs(sy[i]+sy[n]-sy[j]-y)>j-i)
            j++;

        if(j<=n)
            ans = min(ans,j-i);
        else
            break;
    }
    cout<<ans<<endl;
    return 0;
}