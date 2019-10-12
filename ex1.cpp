#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    return a<b;
}

int main()
{
    int arr[] = {5,9,2,63,4,7,85};
    sort(arr,arr+7,cmp);

    for(int i=0; i<7; i++)
	cout<<arr[i]<<" ";
    cout<<endl;
	
    return 0;
}
