 // codeforces #454(A)
  #include<bits/stdc++.h>
  using namespace std;
  
  int main()
   {
     int v1,v2,v3,m;
     cin>>v1>>v2>>v3>>m;
     if(abs(v3-m) > min(v3,m) || (v2<=m) || (v1<=m))
       cout<<-1<<'\n';
     else 
       {
        cout<<2*v1<<endl;
        cout<<2*v2<<endl;
        cout<<max(v3,m);
       }  
     return 0;
   }
