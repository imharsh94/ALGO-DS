 // codeforces #455(div 2) A
 #include <bits/stdc++.h>
 using namespace std;
 
 int main()
 {
  string x,y;
  cin>>x>>y;
  cout<<x[0];
  for(int i=1; i<x.length(); i++)
   {
     if(x[i] < y[0])
       cout<<x[i];
      else
        break; 
   }
   cout<<y[0]<<endl;
  return 0; 
 }
