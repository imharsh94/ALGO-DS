// bottom up dp
#include<bits/stdc++.h>
using namespace std;

pair<int,int > knapsack(int W,int wt[],int val[],int n)
{
    int i,w;
    int K[n+1][W+1];

    for(i=0; i<=n; i++){
        for(w=0; w<=W; w++){
            if(i==0 || w==0)
                K[i][w]=0;
            else if(wt[i-1] > w)
                K[i][w] = K[i-1][w];
            else
                K[i][w] = max(val[i-1]+K[i-1][w-wt[i-1]],K[i-1][w]);
            
        }
    }
    i=n,w=W;
    int z=0;
    while(i!=0 || w!=0)
    {
        if(K[i][w] == K[i-1][w]){
            i=i-1;
        }
        else{
            z = z + wt[i-1];
            w = w - wt[i-1];
            i = i-1;
        }
    }
    return make_pair(K[n][W],z);
}

int main()
{
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int W = 30;
    int n = sizeof(val)/sizeof(val[0]);
    pair<int,int > ans = knapsack(W,wt,val,n);
    printf("%d %d\n",ans.first,ans.second);
    return 0;
}