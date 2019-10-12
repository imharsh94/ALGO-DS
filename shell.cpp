#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
    ifstream ifs("input.txt");
    ofstream ofs("output.txt");
    int n; ifs>>n;
    int a[4]; memset(a,0,sizeof(a));
    a[n]=1;
    int t=3;
    while(t--)
    {
        int x,y; ifs>>x>>y;
        if(a[x]==1)
        {
            a[y]=1; a[x]=0;
        }
        else if(a[y]==1)
        {
            a[x]=1; a[y]=0;
        }
    }
    for(int i=1;i<4;i++)
        if(a[i]==1)
            ofs<<i<<'\n';

    return 0;
}