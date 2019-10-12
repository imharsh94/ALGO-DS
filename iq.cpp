#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,e,o,ce=0,co=0;
    cin>>n;

    
    for(int i = 1; i <= n; i++)
    {
        
        cin>>a;
        if(a % 2 == 0)
        {
            ce++;
            e = i;
        }
        else
        {
            co++;
            o=i;
        }
    }
    
    if(co == 1)
        cout<<o<<'\n';
    else
        cout<<e<<'\n';
    return 0;
}