#include<bits/stdc++.h>
using namespace std;

int N,C;
int arr[100010];

int F(int x)
{
    int cows=1, idx=0,i=1;
    while(i<N)
    {
	if(arr[i] - arr[idx] >= x)
	{
	    cows++;
	    idx = i;
	    if(cows == C)return 1;
	}
	i++;
    }
   
    return 0;
}

int bs(int lo,int hi)
{
    int mid,max=-1;
    while(lo < hi)
    {
	mid = lo +(hi-lo+1)/2;
	if(F(mid)== 1)
	{
	    lo =mid;
	    
	}
	else
	    hi=mid-1;
	
    }
    return lo;
}


int main()
{
    int t; cin>>t;
    while(t--)
    {
	cin>>N>>C;

	for(int i=0; i<N; i++)
	    cin>>arr[i];
	sort(arr,arr+N);
	
	int ans = bs(0,arr[N-1]);
	cout<<ans<<'\n';
    }
    return 0;
}
