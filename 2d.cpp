#include<bits/stdc++.h>
using namespace std;

void pt(int *arr,int n,int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",*((arr + i*m) + j) );
        }
    }
}

int main()
{
    int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    pt((int *)arr,4,3);
    return 0;
}