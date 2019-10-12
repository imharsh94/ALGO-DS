#include<bits/stdc++.h>
using namespace std;

void seive(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int p=2; p*p<=n; p++)
    {
        if(prime[p])
        {
            for(int i=p*2; i<=n; i+=p)
                prime[p]= false;
        }
    }

    for(int p=2; p<=n; p++)
        if(prime[p])
            cout<<p<<" "; 
}

int main()
{
    int n= 30;
    cout<<"The prime numbers are "<<'\n';
    seive(n);
    return 0;
}