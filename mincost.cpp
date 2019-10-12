#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 3

int minCost(cost[R][C],int m,int n)
{
    if(m<0 || n<0)
        return INT_MAX;
    
}

int min(int x,int y,int z)
{
    if(x<y)
        return (x<z)?x:z;
    else
        return (y<z)?y:z;
}

int main()
{
    int cost[m][n] = {{1,2,3},
                    {4,8,2},
                    {1,5,3}};

    printf("%d ", minCost(cost,2,2));
    return 0;
}