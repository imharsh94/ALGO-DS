#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long a[n];

    for(int i=0;i<n;i++)
      cin>>a[i];

    sort(a,a+n);
    int temp=k,c=0;
    for(int i=0;i<n;i++)
    {
       if(2*temp >= a[i])
       {
           if(a[i]> temp)
            temp=a[i];
         continue;    
       } 
       else 
       {
           c++;
            if(a[i]> temp)
            temp=a[i];
       }
           
    }  
    cout<<c;
    return 0;
}