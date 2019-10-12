#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
{
    if(x%y == 0)
        return y;
    else
         gcd(y,x%y);
}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n; i++)
        cin>>a[i];

    sort(a,a+n);
    int z= a[0];
    for(int i=1;i<n;i++)
    {
         z = gcd(z,a[i]);
    }
    cout<<z*n<<'\n';
    return 0;
}