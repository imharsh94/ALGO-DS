// hackerrank comparing the triplets
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],b[3],alice=0,bob=0;

    for(int i=0; i<3 ; i++)
        cin>>a[i];

    for(int j=0 ; j<3; j++)
        cin>>b[j];

    for(int i=0; i<3; i++)
    {
        if(a[i] > b[i])
            alice++;
        if(b[i] > a[i])
            bob++;
    }
    cout<<alice<<' '<<bob<<'\n';
    return 0;
}