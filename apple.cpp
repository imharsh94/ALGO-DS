#include<bits/stdc++.h>
using namespace std;

vector< pair<int,int > > a,b;

int main()
{
   int n,x,y;
   cin>>n;
   for(int i=0; i<n; i++)
   {
       cin>>x>>y
       a.push_back(make_pair(x,y));
   }
    sort(a.begin(),a.end(), greater<pair<int,int>>());

    for(int i=0; i<n; i++)
   {
      cout<<a[i].first<<' '<<a[i].second<<'\n';
   }

   
    return 0;
}
