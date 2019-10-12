#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int d = min((n/m)*b +(n%m)*a,(n/m)*b+b);
    cout<<min(n*a,d);
    return 0;
}