// hackerrank mini-max sum
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a[5],sum=0;

    for(int i=0; i<5; i++)
        {
            cin>>a[i];
            sum += a[i];
        }
    sort(a,a+5);

    cout<<sum-a[4]<<' '<<sum-a[0]<<'\n';
    return 0;
}