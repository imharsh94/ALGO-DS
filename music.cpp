#include<bits/stdc++.h>
using namespace std;


int main()
{
    int k,flag=0;
    cin>>k;
    k = 2*k;

    map< int,int > mp;
    map< int,int >:: iterator it;

    char m[5][5];

    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            cin>>m[i][j];


    for(int i=0;i<4;i++)
    {
        for(int j=0; j<4; j++)
        {
            if(m[i][j]=='.')
                continue;
            int z = m[i][j] - '0';

            mp[z]++;
            
        }
    }

    for(it=mp.begin() ; it!=mp.end(); ++it)
    {
        if(mp[it->first] > k)
            flag=1;
    }

    if(flag)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}