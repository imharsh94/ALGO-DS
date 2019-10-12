#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector< int > v;
    int f[] = {1,1,2,2,2,3,3,3,3,3,3};

    for(int i=0; i<11; i++)
    {
        v.push_back(2*f[i] - i);
    }
    cout<<f[-1]<<'\n';

    for(auto i:v)
        cout<<i<<' ';
    return 0;
}
