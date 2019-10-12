#include<bits/stdc++.h>
using namespace std;

map< int,int > mp;
map< int,int >:: iterator it;

int main()
{
    int n,flag=0,a;
    cin>>n;

   

    for(int i=0; i<n; i++)
    {
        cin>>a;
        mp[a]++;
    }


    for(it = mp.begin() ; it != mp.end() ; ++it)
    {
        if(mp[it->first] > (n+1)/2)
            flag=1;
    }

    if(flag)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}