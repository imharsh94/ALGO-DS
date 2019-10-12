// hackerrank army game
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,row,col,res=0;
    cin>>n>>m;
    row = n; col=m;

    if(row<2 && col<2)
        cout<<1<<'\n';
    else
    {
        res = (row/2)*(col/2);
        if(row % 2 != 0)
            res = res + (col/2);
        if(col % 2 != 0)
            res = res + (row/2);
        if(row % 2 != 0  && col % 2 != 0)
            res = res+1; 

        cout<<res<<'\n';
    }
    
    return 0;
}