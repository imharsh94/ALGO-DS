#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,ans; cin>>p;
    set< int > s;
    set< int >::iterator it;
    p--;
    ans =p;
 for (int i = 2; i * i <= p; ++i) 
 {
    while (p % i == 0)
        {
            s.insert(i);
            p /= i;
        }
 }
    if (p != 1) 
       s.insert(p);




 

for(it=s.begin() ; it!= s.end(); it++)
    {
        int x = *it;
        
        ans =  (ans*(x-1))/x;
    }
cout<<ans<<endl;


    return 0;
}