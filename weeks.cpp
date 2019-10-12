 #include<bits/stdc++.h>
 using namespace std;
 
 int a[7];
  int main()
  {
   map< string,int > mp;
   mp.insert(make_pair("mon",0));
   mp.insert(make_pair("tues",1));
   mp.insert(make_pair("wed",2));
   mp.insert(make_pair("thurs",3));
   mp.insert(make_pair("fri",4));
   mp.insert(make_pair("sat",5));
   mp.insert(make_pair("sun",6));
   
   
   
  
   int t;
   cin>>t;
   while(t--)
   {
    string s;
    int d;
    cin>>d;
    cin>>s;
   int it = mp.find(s)->second;
   int z = d%7;
   
   
   if(z){
    if(d == 31){
   for(int i=it ; i< it+3 ; i++ )
    {
      a[i%7] += 1;
    }}
    
    if(d == 30){
   for(int i=it ; i< it+2 ; i++ )
    {
      a[i%7] += 1;
    }}
    
    if(d == 29){
   for(int i=it ; i< it+1 ; i++ )
    {
      a[i%7] += 1;
    }}
    
    }
    
    
   for(int i=0;i<7;i++)
     cout<<a[i]+4<<" ";
   cout<<endl;
   for(int i=0;i<7;i++)
     a[i]=0;
   }
   
   
   return 0;
  }
