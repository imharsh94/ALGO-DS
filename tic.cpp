// codeforces round 454(B)
 #include<bits/stdc++.h>
 using namespace std;
  
  char t[10][10];
  
  int main()
  {
   ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
   for(int i=0;i<9;i++)
     for(int j=0;j<9;j++)
       cin>>t[i][j];
       
   int u,v;
   cin>>u>>v;
   u = (u-1)%3;
   v = (v-1)%3;
   int c=0;
   
   for(int i=u*3; i<(u+1)*3; i++)
     for(int j=v*3; j<(v+1)*3; j++)
       if(t[i][j] == '.')
         {
           t[i][j] = '!';
           c=1;
         }
         
    if(!c)
    {
      for(int i=0;i<9;i++)
        for(int j=0; j<9;j++)
         {
           if(t[i][j] =='.')
            {
             t[i][j] = '!';
            }
         }
    }
    
    for(int i=0;i<9;i++)
      {
        for(int j=0;j<9;j++)
         {
           cout<<t[i][j];
           if(j==2 || j==5)
             cout<<" ";
         }
         cout<<endl;
         if(i==2 || i==5)
           cout<<endl;
      }
   
   return 0;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
