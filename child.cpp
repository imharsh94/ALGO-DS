#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair< int,int > p[4];

    for(int i=0; i<4; i++)
    {
        string st;
        cin>>st;
        p[i].first=st.size()-2;
        p[i].second = i;
    }
    sort(p,p+4);
    if(p[0].first*2<=p[1].first && p[3].first<p[2].first*2)
        cout<<char(p[0].second+'A');
    else if(p[3].first>=p[2].first*2 && p[0].first*2>p[1].first)
        cout<<char(p[3].second+'A');
    else
        cout<<"C";
    return 0;
}