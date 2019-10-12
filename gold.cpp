#include<bits/stdc++.h>
using namespace std;

long long a[1000000];

long long solve(long long x)
{
    if(x<1000000)
        return a[x];
    else
        return max(x,solve(x/2)+solve(x/3)+solve(x/4));
}

int main()
{
    long long n;
    a[1]=1;a[0]=0;a[2]=2;a[3]=3;a[4]=4;a[5]=5;a[6]=6;a[7]=7;a[8]=8;a[9]=9;a[10]=10;a[11]=11;
    for(long long i=12; i<1000000; i++)
        a[i] = max(i,a[i/2]+a[i/3]+a[i/4]);

    while(scanf("%lld",&n) == 1)
    {
       long long z= solve(n);
       cout<<z<<'\n';

    }
    return 0;
}