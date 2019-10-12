#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int x[n]; for(int& e: x) cin>>e;

    bool intersect= false;
    for(int i=0 ; i<n-1; i++)
        {
            int a=x[i], b=x[i+1];
            if(a>b) swap(a,b);
            for(int j=0; j<n-1; j++)
            {
                int c = x[j],d=x[j+1];
                if(c>d) swap(c,d);
                if(a<c and c<b and b<d) intersect = true;
            }
        }

        cout<<(intersect?"yes":"no")<<'\n';
    return 0;
}