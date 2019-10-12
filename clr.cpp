#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a;
    cin>>n>>m;
    bool isTwo = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a;
            if(a == 1)
            {
                if(i==0 || i==(n-1))
                    isTwo=1;
                if(j==0 || j==(m-1))
                    isTwo=1;
            }
        }
    }

    if(isTwo)
        cout<<2<<endl;
    else
        cout<<4<<endl;
    return 0;
}