#include<bits/stdc++.h>
using namespace std;
long long int arr[100050];


int main()
{
    string s;
    cin>>s;
    while(s != "0")
     {
	memset(arr,0,sizeof(arr));
	long long n= s.length(), sum;
	arr[n+5];
        arr[0]=1;
	sum = (s[0]-'0')*10+(s[1]-'0');
	if(sum>9 && sum<=26 && s[1]>'0' && s[1]<='9')
	    arr[1]=2;
	else
	    arr[1]=1;

	for(int i=2; i<n; i++)
	{
	    sum = (s[i-1]-'0')*10 +(s[i]-'0' );
	    if(s[i]>'0' && s[i]<='9')
	        arr[i] = arr[i-1];
	    
	    if(sum>9 && sum<=26 )
		arr[i] = arr[i]+arr[i-2];
	    
	}

	cout<<arr[n-1]<<'\n';
        cin>>s;
	
     }
    
    
    return 0;
}
