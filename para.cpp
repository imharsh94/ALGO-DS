#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s1,s2,s3,x=0,y=0,z=0;
    cin>>s1>>s2>>s3;
    x = sqrt((s1*s3)/s2);
    y = sqrt((s1*s2/s3));
    z = sqrt((s2*s3)/s1);

    cout<<4*(x+y+z)<<'\n';
    return 0;
}