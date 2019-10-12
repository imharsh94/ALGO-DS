//codechef what's in a name NITIKA
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 10;
const int MAXK = 2e3 +10;
const int MAXL = 18;

int main()
{
  int t;
  cin>>t;
 cin.ignore();
 assert(t>=1 && t<= 100);
 while(t-- > 0)
 {
   string s;
   getline(cin,s);
   stringstream ss(s);
   vector< string > all;
   while(ss >> s)
   {
     assert(1<= s.length() && s.length()<=10);
     all.push_back(s);
   }
   for(auto &s : all)
   {
     if(s[0]>= 'a' && s[0]<='z')
      s[0] -= 'a'-'A';

     if(&s != &all.back())
     {
       cout<<s[0]<<". ";
     }
     else{
       for(int i=0;i<s.length();i++)
       {
         cout<<(i==0 ? (char)toupper(s[i]) : (char)tolower(s[i]));
       }
       cout<<'\n';
     }
   }
 }

  return 0;
}