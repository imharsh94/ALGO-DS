#include<bits/stdc++.h>
typedef long long i64;
using namespace std;

const int MAX = 300001;
i64 sum[MAX];

int b_s(int lo,int hi,int p)
{
    while(lo < hi)
    {
	int mid = lo + (hi-lo)/2;
	if(sum[mid] > p)
	    hi = mid;
	else
	    lo = mid+1;
    }
    if(sum[lo] > p)
	return (lo-1);
    else if(sum[lo] == p)
	return lo;
    else
	return -1;
}

int main()
{
    int n,m,a,i,j,lo,p;
    i64 res;
    scanf("%d %d",&n,&m);
    for(i=1; i<=n; i++)
    {
	scanf("%d", &a);
	sum[i] = sum[i-1]+a;
    }

    for(i=1,res=0; i<=n; i++)
    {
	lo=i;
	p = m+sum[i-1];
	j = b_s(lo,n,p);
	if(j>0 && j>=i)
	    res = max(res,sum[j]-sum[i-1]);
    }
    printf("%lld\n", res);
    return 0;
}
