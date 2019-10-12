#include<bits/stdc++.h>
using namespace std;

int main()
{
string s1,s2;
cin>>s1>>s2;
int a[110],b[110],carry=0,sub[110];

for(int i=0 ; i<s1.length(); i++)
 {
  int d = s1[i] - '0';
  a[i] = d;
 }
 
for(int i=0 ; i<s2.length(); i++)
 {
  int d = s2[i] - '0';
  b[i] = d;
 } 
 for

 
for(int i=0; i<s1.length();i++)
 {
   int d = (s1[i] - '0');
    if(carry)
    {
     d = d+10;
    
    }
   if(d%2 == 0 )
   {
    b[i] = d/2;
    carry=0;
    }
   else
   {
    b[i] = d/2;
    carry = 1;
   }
 }
 
for(int i=0 ;i<s1.length() ; i++)
 {
  cout<<b[i];
 }   
return 0;
}
