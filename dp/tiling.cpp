// general solution of tiling problem
// given n*m board, 1*m tile size
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int count[n+1];
    count[0]=0;

    for(int i=1; i<=n ; i++)
    {
        if(i < m )
            count[i]=1;
        else if( i== m)
        {
            count[i] = 2;    
        }
        else
        {
            count[i] = count[i-1] + count[i-m];
        }
        
    }
    cout<<count[n]<<'\n';   
    return 0;
}