#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=-9999999,a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a<0)
        {
            if(a>ans)
              ans = a;
        }
         
        else
        { 
        int t = sqrt(a);
        if (t*t != a)
         {
            
             if(a > ans)
               ans = a;
         }
        }
    }
    
   cout<<ans<<endl;
    return 0;
}