#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX= (int)1e6+10;

int a[MAX],b[MAX];
int maxa[MAX],maxb[MAX];
int main()
{
int n;

cin>>n;
for(int i=1,x ; i<=n ; i++)
 {
   cin>>x;
   a[x]++;
 }
 
for(int i=1,x ; i<=n ; i++)
 {
   cin>>x;
   b[x]++;
 }
 
 for(int i=(int)1e6 ; i>0 ; i--)
   {
    maxa[i]=maxb[i]=-1;
   for(int j=i ; j<=(int)1e6 ; j+=i) 
     {
       if(a[j]>0) maxa[i] = j;
       if(b[j]>0) maxb[i] = j;
     }
     if(maxa[i]!= -1 && maxb[i] != -1)
     { 
      cout<<maxa[i]+maxb[i]<<endl;
      return 0;
     }
    } 
return 0;
}
