#include<bits/stdc++.h>
using namespace std;

int sum(int z)
{
 return (z/100 + z/10%10 + z%10);
}


bool check(int d)
{
 return (sum(d/1000) == sum(d%1000));
}


int main()
{
 int n;
 cin>>n;
 do
 {
  n++;
 }while(!check(n));
 cout<<n<<endl;
 return 0;
}
