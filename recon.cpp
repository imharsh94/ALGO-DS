#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n],min=INT_MAX,x,y;
    for(int& e: a) cin>>e;

    for(int i=0; i<n; i++)
    {
        if(abs(a[(i+1)%n] - a[i%n]) < min)
        {
            min = abs(a[(i+1)%n] - a[i%n]) ;
            x=i%n+1; y=(i+1)%n+1;
        }

    }
    cout<<x<<" "<<y<<'\n';
    return 0;
}