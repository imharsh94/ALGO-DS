#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);


    long long int n,k;
    cin>>n>>k;
    n = (n+1)/2;
    
    cout<<(k>n ? 2*(k-n) : 2*k-1)<<'\n';
    return 0;
}