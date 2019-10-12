#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair< int,int > &a, const pair< int,int > &b)
{
    return (a.second < b.second);
}

int main()
{
    vector< pair< int,int > > v;

    int arr[] = {10,20,5,40};
    int arr1[] = {30,60,20,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++)
	v.push_back(make_pair(arr[i],arr1[i]));

    cout<<"The vector before set operation is\n";
    for(int i=0; i<n; i++)
	cout<<v[i].first<<" "<<v[i].second<<endl;


    sort(v.begin(),v.end(),sortbysec);


     cout<<"The vector after set operation is\n";
    for(int i=0; i<n; i++)
	cout<<v[i].first<<" "<<v[i].second<<endl;
    
    return 0;
}
