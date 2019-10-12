// 2*n tiling problem dp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count[n+1];
    count[0] = 0;
    count[1] = 1;
    count[2] = 2;

    for(int i=3 ; i<=n; i++)
    {
        count[i] = count[i-1] + count[i-2];
    }
    cout<<count[4]<<'\n';
    cout<<count[5]<<'\n';
    return 0;
}