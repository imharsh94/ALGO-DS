/** ! rotating the array by reversing the array 3 times
 * first from 0 to d-1
 * second from d to n-1
 * third the whole array */

#include<bits/stdc++.h>
using namespace std;

int main()
{  
    int n,d;
    cin>>n>>d;
    int a[n];

    for(int i=0 ; i<n; i++)
        cin>>a[i];

    for(int i=0; 2*i<d ; i++)
    {
        int temp = a[i];
        a[i] = a[d-1-i];
        a[d-1-i] = temp;
       
    }

    for(int i=0; 2*i<(n-d); i++)
    {
        int temp = a[i+d];
        a[i+d] = a[n-1-i];
        a[n-1-i] = temp;

    }


    for(int i=0 ; 2*i<n; i++)
    {
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    } 

    for(int i=0; i<n; i++)
       cout<<a[i]<<" ";

    return 0;
}