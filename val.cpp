#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,v,a,b;
    cin>>n>>v;
    set< int > s;
    set< int > :: iterator it;

    for(int i=1; i<=n; i++)
    {
        cin>>a;
        for(int j = 1 ; j<=a ; j++)
        {
            cin>>b;
            if(v > b)
                s.insert(i);
        }
    }

    cout<<s.size()<<'\n';
    for(it = s.begin() ; it!= s.end(); it++)
        cout<<*it<<" ";
    cout<<'\n';

    return 0;
}