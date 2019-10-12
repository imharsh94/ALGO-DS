// recursive dp solution of goldmine solution
#include<bits/stdc++.h>
using namespace std;
const int MAX=100;

int getMax(int gold[][MAX],int row, int col, int m, int n)
{
    if(row < 0 || row > m || col > n || col < 0)
        return 0;
    if(col == n-1)
        return gold[row][col];

    int ans=0;

    ans += max(getMax(gold, row , col+1 , m ,n), max(getMax(gold , row + 1, col+1, m ,n), getMax(gold, row - 1, col + 1, m ,n)))+ gold[row][col];

    return ans;
}


int getMaxGold(int gold[][MAX] , int m, int n)
{
    int col = 0;
    int res[m];

    for(int row = 0 ; row < m ; row++)
    {
        res[row] = 0;
        res[row] = getMax(gold, row, col , m, n);
    }

    int result = INT_MIN;
    for(int i=0 ; i<m; i++)
        result = max(result,res[i]);

    return result;
}

int main()
{
    int gold[MAX][MAX] = {{1,3,1,5},
                        {2,2,4,1},
                        {5,0,2,3},
                        {0,6,1,2}
    };
    int m=4,n=4;
    cout<<getMaxGold(gold,m,n)<<endl;
    return 0;
}