#include<bits/stdc++.h>
using namespace std;
int arr[100010],inv[100010];

int main()
{
    int n; cin>>n;
    while(n != 0)
    {
	int flag=0;
	memset(arr,0,sizeof(arr));
	memset(inv,0,sizeof(inv));

	for(int i=1; i<=n; i++)
	{
	    cin>>arr[i];
	    inv[arr[i]] = i;
	}

	for(int i=1; i<=n; i++)
	    if(arr[i] != inv[i])
	    {
		flag=1;
		break;
	    }
	if(flag)
	    cout<<"not ambiguous\n";
	else
	    cout<<"ambiguous\n";
	cin>>n;
    }
    return 0;
}
