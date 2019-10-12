// ! N queens print all solutions
#include<bits/stdc++.h>
// #define N 4
using namespace std;

bool res = false;
 int board[4][4];
 int N=4;

void printsol()
{
    static int k=1;
    cout<<k<<endl;
    k++;
    for(int i=0 ; i<N; i++)
    {
        for(int j=0; j<N; j++)
            cout<<board[i][j]<<' ';
        cout<<endl;
    }
}


bool safe(int row,int col)
{
    int i,j;
    for(int i=0; i<col; i++)
        if(board[row][i])
            return false;

    for(int i=row,j=col; i>=0 && j>=0 ; i--,j--)
        if(board[i][j])
            return false;
    
    for(int i=row,j=col; j>=0&&i<N; i++,j--)
        if(board[i][j])
            return false;
    
    return true;
    
}

bool solve(int col)
{
    if(col == N)
    {
        printsol();
        return true;
    }

    
    for(int i=0; i<N; i++)
    {
        if(safe(i,col))
        {
            board[i][col] = 1;

            res =  solve(col+1) || res;

            board[i][col] = 0; // bactrack
        }
    }
    return res;
}

void solvenq()
{
    //int N=4;
    int board[N][N];
    memset(board,0,sizeof(board));
    if(solve(0) == false)
        cout<<"No solution exists";
    return;
}


int main()
{
   
    solvenq();
    return 0;
}