#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a; cin>>a;
    int d,r,i=1,flag=0;
    a++;
    while(true)
    {
       
        d = abs(a);
        while(d>0)
        {
            r = d%10;
            if(r == 8)
                {flag=1;break;}
            d = d/10;
        }
        if(flag) break;
        i++;a++;
    }

    cout<<i<<'\n';
    return 0;
}