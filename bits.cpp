#include<bits/stdc++.h>
using namespace std;

int cbits(int n)
{
    int count =0;
    while(n)
    {
        n &=(n-1);
        count++;
    }
    return count;
}

int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
   
    for(int i=0;i<n;i++)
    {
         c = (c + cbits(a[i]);
    }
    cout<<c<<endl;
}