#include<bits/stdc++.h>
using namespace std;
int Bit[1000],a[1000],n;

void update(int x,int value)
{
    for(;x<=n; x+=x&-x)
	Bit[x] += value;
}

int query(int x)
{
    int sum=0;
    for(;x>0; x-=x&-x)
	sum += Bit[x];
    return sum;
}



int main()
{
   
    cin>>n;
    for(int i=1;i<=n;i++)
    {
	cin>>a[i];
	update(i,a[i]);
    }
    cout<<"The sum of the first 10 nos\n"<<query(10)<<'\n';
    return 0;
}
