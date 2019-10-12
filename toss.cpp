#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod=1e9+7;
 
void multiply(ll (&res)[3][3],ll (&p)[3][3]){
 
     ll result[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
              result[i][j]=(result[i][j]+((res[i][k]%mod)*p[k][j]%mod)%mod)%mod;
            }
        }
    }
 
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            res[i][j]=result[i][j];
 
 
 
}
 
 
 ll power(ll n){
 
    ll P[][3]={ {1,1,1},{1,0,0},{0,1,0} };
    ll result[][3]={{1,0,0},{0,1,0},{0,0,1} };
 
          while(n!=0){
 
         if(n%2){
            multiply(result,P);
         }
         n/=2;
         multiply(P,P);
 
    }
 
   return (result[0][0]+result[0][1])%mod;
 
}
 
 
int main(){
     ll T;  cin>>T;
     while(T--){
     ll n;   cin>>n;
 
     ll ans=power(n);
     cout<<ans<<endl;
     }
 
    return 0;
}