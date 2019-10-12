#include<bits/stdc++.h>
using namespace std;
#define ll long long

int N;
int dp[4];

int main(){
  ios::sync_with_stdio(0);cin.tie(0);

  cin>>N;
  for(int i=0;i<N;i++)
  {
    int x;cin>>x;
    dp[3]=max(dp[2],dp[3])+(x==2);

    dp[2]=max(dp[1],dp[2])+(x==1);

    dp[1]=max(dp[0],dp[1])+(x==2);
    
    dp[0]=dp[0]+(x==1);


  }

  cout<<max(dp[2],dp[3])<<'\n';

  return 0;
}