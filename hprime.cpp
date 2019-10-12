#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

    int test;
    cin>>test;
    while(test--)
    {
        ll n,pro=1,ans=0;
        cin>>n;
        for(int i=0; i<15; i++)
        {
            pro = pro*prime[i];
            if(pro<= n)
                ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}