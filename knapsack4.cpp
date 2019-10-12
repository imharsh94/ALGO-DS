// printing max value of the knapsack and the solution
#include<bits/stdc++.h>
using namespace std;

void printknap(int W, int wt[], int val[], int n)
{
    int K[n+1][W+1]={};

    for(int i=0; i<=n; i++)
    {
        for(int w=0; w<=W; w++)
        {
            if(i==0 || w==0)
                K[i][w]=0;
            else if(wt[i-1] > w)
                K[i][w] = K[i-1][w];
            else
                K[i][w] = max(val[i-1]+K[i-1][w-wt[i-1]], K[i-1][w]);
        }
    }
    cout<<K[n][W]<<'\n';
    int res = K[n][W];
    int w=W;

    for(int i=n; i>0 && res>0; i--)
    {
        if(res == K[i-1][w])
            continue;
        else{
            printf("%d ",wt[i-1]);
            res = res - val[i-1];
            w = w - wt[i-1];
        }
    }
    cout<<'\n';
}

int main()
{
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int W = 50;
    int n = sizeof(wt)/sizeof(wt[0]);

    printknap(W,wt,val,n);
    return 0;
}