#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a!=1 && b!=1 && c!=1)
        cout<<a*b*c<<'\n';
    else
    {
        if(a==1 && c == 1)
            cout<<a+b+c<<'\n';
        else if(a == 1)
            cout<<(a+b)*c<<'\n';
        else if(c == 1)
            cout<<a*(b+c)<<'\n';
        else if(b == 1)
        {
            int d = max((a+b)*c,a*(b+c));
            cout<<d<<'\n';
        }
    }
    
    return 0;
}
