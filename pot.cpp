#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,k,n,z,b=0;
    cin>>y>>k>>n;
    z = k - y%k;
    while(z<=n-y)
    {
       cout<<z<<" ";
       z+=k;
       ++b;
    }

    if(b==0)
        cout<<-1;

   
    return 0;
}
