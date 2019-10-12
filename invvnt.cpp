#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll  merge(ll arr[],ll temp[],ll left,ll mid,ll right)
{
     
    ll i,j,k,inv_cnt=0;
    i = left;
    j = mid;
    k = left;

    while(i<= mid-1 && j<=right)
    {
	if(arr[i] <= arr[j])
	    temp[k++] = arr[i++];
	else
	{
	    temp[k++] = arr[j++];
	    inv_cnt = inv_cnt + (mid - i);
	}
    }
    while(i <= mid-1)
	temp[k++] = arr[i++];
    while(j <= right)
	temp[k++] = arr[j++];
    for(ll i=left; i<=right; i++)
	arr[i] = temp[i];

    return inv_cnt;
}

ll mergesort(ll arr[], ll temp[],ll first,ll last)
{
    ll mid,inv_cnt=0;
    if(last>first)
    {
	mid = (first+last)/2;
	inv_cnt = mergesort(arr,temp,first,mid);
	inv_cnt += mergesort(arr,temp,mid+1,last);
	inv_cnt += merge(arr,temp,first,mid+1,last);
    }
    return inv_cnt;
}



int main()
{
    int t; cin>>t;
    {
	while(t--)
	{
	    ll n; cin>>n;
	    ll a[n+100],temp[n+100];
	    
	    memset(a,0,sizeof(a));
	    memset(temp,0,sizeof(temp));
	    
	    for(ll i=0;i<n;i++)
		cin>>a[i];

	    ll c = mergesort(a,temp,0,n-1);
	    cout<<c<<'\n';
	}
    }
    return 0;
}
