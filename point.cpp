#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;

int main()
{
    int n,ans=0,c1=0,c2=0,c3=0,c4=0,a,b;
    cin>>n;
    vector< pair< int,int > > v;

    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    for(int i=0; i<n; i++)
    {
        c1=0;c2=0;c3=0;c4=0;
        for(int j=0; j<n; j++)
        {
            if(i != j)
            {
                if(v[i].f == v[j].f && v[i].s < v[j].s)
                    c1++;
                if(v[i].f == v[j].f && v[i].s > v[j].s)
                    c2++;
                if(v[i].f > v[j].f && v[i].s == v[j].s)
                    c3++;
                if(v[i].f < v[j].f && v[i].s == v[j].s)
                    c4++;
            }
            
        }
        if(c1>0 && c2>0 && c3>0 && c4>0)
            ans++;
       
    }
    cout<<ans<<'\n';
    return 0;
}