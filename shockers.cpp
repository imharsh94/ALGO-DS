// codeforces
#include<bits/stdc++.h>
using namespace std;

bitset<26> ans,tmp;
int i,n,cnt=0;
string s;
char ch;

int main()
{
 ans.flip();
 for(cin>>n,i=1;i<=n;++i)
   {
     cin>>ch>>s;
     if(ans.count() == 1)
       {
        if((ch=='!' || ch=='?') && i<n)cnt++;
       }
      else
      {
        tmp.reset();
        for(auto x:s) tmp[x-'a']=1;
          if(ch == '!') 
            ans &= tmp;
          else if(ch=='.' || ch == '?')
            ans &= ~tmp;
      } 
   }
   cout<<cnt<<endl;
 return 0;
}
