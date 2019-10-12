
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    int K[4][51]={};

    for(int i=0; i<=n; i++){
        for(int j=0; j<=W; j++){
            if(i==0 || j==0)
                K[i][j]=0;
            else if(wt[i-1] <= j)
                K[i][j]=max(val[i-1]+K[i-1][j-wt[i-1]],K[i-1][j]);
            else
                K[i][j]= K[i-1][j];
        }
    }

    cout<<K[n][W]<<'\n';
    return 0;
}