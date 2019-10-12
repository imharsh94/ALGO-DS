#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int t = min(n,m);

    if(n == 1 || m == 1)
        cout<<"Akshat\n";
    else
    {
        if(t % 2 == 0 )
            cout<<"Malvika\n";
        else
            cout<<"Akshat\n";
    }
    return 0;
}
