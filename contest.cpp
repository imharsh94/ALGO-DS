#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int mi = max(3*a/10, a-(a/250*c));
    int va = max(3*b/10, b-(b/250*d));

    if(mi > va)
        cout<<"Misha\n";
    else if(va > mi)
        cout<<"Vasya\n";
    else
        cout<<"Tie\n";
    return 0;
}