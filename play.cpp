#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,wa=0,d=0,wb=0;
    cin>>a>>b;

    for(int i=1; i<=6; i++)
    {
        if(abs(a-i) > abs(b-i))
            wb++;
        else if(abs(a-i) == abs(b-i))
            d++;
        else
            wa++;
    }

    cout<<wa<<" "<<d<<" "<<wb<<'\n';
    return 0;
}