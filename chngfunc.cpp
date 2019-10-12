// chang and the perfect square codechef
#include<bits/stdc++.h>
#define MAX 1000005
using namespace std;

vector< int > divisors[MAX]; 

int main()
{
    freopen("inp4.txt", "r", stdin);
    freopen("out4.txt", "w", stdout);
    int a,b;
    cin>>a>>b;
    long long ans=0;
   
    int sqrtb = (int)sqrt(b);

    for(int i=1;i<=sqrtb;i++)
    {
        for(int j=i;j<=b;j+=i)
        {
           divisors[j].push_back(i);
           if(j/i> sqrtb)
             divisors[j].push_back(j/i);
        }
    }

    for(int y=1;y<=b;y++)
    {
        for(int j=0;j<(int)divisors[y].size();j++)
        {
            int k_plus_x = divisors[y][j],k_minus_x = y/divisors[y][j];
            if(k_plus_x > k_minus_x)
            {
            if((k_plus_x + k_minus_x)%2==0 && (k_plus_x - k_minus_x)%2==0)
            {
                int x = (k_plus_x + k_minus_x)/2;
                int y = (k_plus_x - k_minus_x)/2;
                if(x>=1 && x<=a) ans++;
            }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}