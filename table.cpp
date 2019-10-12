#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    k= k-n+1;

    int a[n][n] ;

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            a[i][j] = 1;
    

    for(int i=0;i<n;i++)
        a[i][i] = k;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n; j++)
           {
                cout<<a[i][j]<<" ";
           }
           cout<<'\n';
    }
    return 0;
}
