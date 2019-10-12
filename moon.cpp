#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,d,r,c;
    cin>>n>>m;
    if(n<m)
        cout<<-1<<'\n';
    d = n/2;
    r = n%2;
    c = d;

    while(c>=0)
    {
       
        if((d+r)% m == 0)
        {
            cout<<d+r<<'\n';
            break;
        }
        c--;
        d++;
    }
    return 0;
}