#include<bits/stdc++.h>
using namespace std;
int const dx[] ={0,0,1,-1};
int const dy[] ={1,-1,0,0};
int x[4],y[4];

bool f()
{
    x[3]=x[0]; y[3]=y[0];
    int d[3];
    for(int i=0;i<3;i++)
        d[i]=(x[i]-x[i+1])*(x[i]-x[i+1]) +(y[i]-y[i+1])*(y[i]-y[i+1]);
    sort(d,d+3);
    return !d[0] ? false :(d[0]+d[1]==d[2]);
}

int main()
{
    for(int i=0;i<3;++i) cin>>x[i]>>y[i];
    if(f()) return cout<<"RIGHT\n",0;
    for(int i=0; i<3; i++)
        for(int k=0;k<4;k++)
        {
            x[i]+=dx[k];y[i]+=dy[k];
            if(f()) return cout<<"ALMOST\n",0;
            x[i]-=dx[k]; y[i]-=dy[k];
        }
    cout<<"NEITHER\n";
    return 0;
}
