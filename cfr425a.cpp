#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int d = n/k;
    if(d%2 == 0)
     cout<<"NO";
    else
     cout<<"YES"; 
    return 0;
}
