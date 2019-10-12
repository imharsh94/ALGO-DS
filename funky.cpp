#include<bits/stdc++.h>
using namespace std;

int main()
{
    int z,n;
    bool flag=0;
    cin>>n;
    
    for(int i=1; i*(i+1)<=n*2; i++)
    {
        int z = 2*n - i*(i+1);
        z = sqrt(z);
        if(z>0 && i*(i+1) + z*(z+1) == 2*n)
         flag=1;
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";

  
    return 0;
}