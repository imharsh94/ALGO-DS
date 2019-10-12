// to maximize the gold collection dp
#include<bits/stdc++.h>
using namespace std;
const int MAX = 100;

int getMaxGold(int gold[][MAX], int m, int n)
{
    int table[m][n];
    memset(table,0,sizeof(table));

    for(int col=n-1 ; col>=0 ; col--)
    {
        for(int row=0; row<m; row++)
        {
            int right = (col == n-1) ? 0 : table[row][col+1];

            int right_up = (col == n-1 || row == 0)? 0 : table[row-1][col+1];

            int right_down = (col== n-1 || row == m-1)? 0 : table[row+1][col+1];

            table[row][col] = gold[row][col] + max(right ,
                        max(right_up, right_down));
            
        }
    }

    int res = INT_MIN;
    for(int i=0; i<n ; i++)
        res = max(res,table[i][0]);

    return res;
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