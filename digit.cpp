#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,d;
    cin>>k>>d;

    if(!d&&k>1)
       return  cout<<"No solution",0;
    
       
    cout<<d;

    for(int i=0;i<k-1;i++)
        cout<<"0";

    return 0;
}