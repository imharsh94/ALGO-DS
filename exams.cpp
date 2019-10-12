#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    if(k/n > 2)
        return cout<<"0\n",0;
    else
    {
        cout<<n-(k%n)<<'\n';
    }
}