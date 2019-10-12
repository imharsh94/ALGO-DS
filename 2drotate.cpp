// left rotate 2d matrix
#include<bits/stdc++.h>
using namespace std;
#define R 4
#define C 3

int main()
{
    int arr[4][3] = {{1,2,3},
                    {5,6,7},
                    {9,10,11},
                    {13,14,15}};


    int arrt[3][4];
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            arrt[j][i] = arr[i][j];

    for(int i=0; i<C; i++){
        for(int j=0; j<R; j++)
            cout<<arrt[i][j]<<" ";
        cout<<'\n';
        }

    return 0;
}