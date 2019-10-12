#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r1,c1,r2,c2,king,rook,bishop=0;
    cin>>r1>>c1>>r2>>c2;
    rook = (r1 == r2 || c1 == c2)?1:2;
    king = max(abs(r2-r1),abs(c2-c1));
    if(((r1%2!=0 && c1%2!=0) || (r1%2==0 && c1%2==0)) && ((r2%2==0 && c2%2==0) || (r2%2!=0 && c2%2!=0)))
            {
        if(abs(r2-r1)== abs(c2-c1))
            bishop=1;
        else
            bishop=2;
    }
    else if (((r1%2!=0 && c1%2==0) || (r1%2==0 && c1%2!=0)) && ((r2%2==0 && c2%2!=0)  || (r2%2!=0 && c2%2==0)))
    {
        if(abs(r2-r1)== abs(c2-c1))
            bishop=1;
        else
            bishop=2;
    }
    cout<<rook<<" "<<bishop<<" "<<king<<'\n';
return 0;
}    