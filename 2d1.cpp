// ! creating a 2d array using singlr pointer !!
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r=3,c=4;
    int *arr = (int *)malloc(r*c*sizeof(int));
    int i,j,count=0;

    for(i=0 ; i<r; i++)
        for(j=0; j<c; j++)
            *(arr + i*c + j) = ++count; // ! arr[i*c + j]

    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            printf("%d ", arr[i*c + j]);
    return 0;
}