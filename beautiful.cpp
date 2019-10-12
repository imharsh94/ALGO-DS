// codechef beautiful array
 #include<bits/stdc++.h>
 using namespace std;
 
 typedef long long ll;
 typedef pair< int,int > pii;
 
 #define f first
 #define s second
 
 int main()
  { 
    ios_base::sync_with_stdio(false);
    int t,n,x;
    cin>>t;
    while(t--)
     {
       cin>>n;
       int a[4] = {0,0,0,0};
       for(int i=1; i<=n; i++)
         {
           cin>>x;
           a[x%4] += 1;
           
         }
         
         if((a[1]+2*a[2]+3*a[3])%4 == 0)
          {
            int ans = min(a[1],a[3]);
            a[3] -= ans;
            a[1] -= ans;
            ans += a[2]/2;
            a[2] %= 2;
            if(a[2])
             {
               ans += 2;
               a[2] = 0;
               if(a[3])
               {
                 a[3] -= 2;
                 
               } 
               if(a[2])
                {
                  a[2] -= 2;
                }
             }
             
             if(a[1])
              {
                ans += (a[1]/4)*3;
                
              }
              if(a[3])
              {
                ans += (a[3]/4)*3;
              }
              cout<<ans<<"\n";
          }
          else
           cout<<"-1\n";
     }
    return 0;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
