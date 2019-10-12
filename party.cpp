#include<bits/stdc++.h>
using namespace std;


pair<int,int > knapsack(int W,vector< pair<int,int> >v,int n)
{
   
    int K[n+10][W+10];

    for(int i=0; i<=n; i++){
        for(int w=0; w<=W; w++){
            if(i==0 || w==0)
                K[i][w]=0;
            else if(v[i-1].second > w)
                K[i][w] = K[i-1][w];
            else
                K[i][w] = max(v[i-1].first+K[i-1][w-v[i-1].second],K[i-1][w]);
            
        }
    }

    int z=0;
    for(int i=0; i<=W; i++)
    {
        if(K[n][i] == K[n][W])
        {
            z = i;
            break;
        }
    }
    return make_pair(K[n][W],z);
}


int main()
{
    int W,n,a,b;
    cin>>W>>n;

    while(W!=0 || n!=0)
    {
        //int wt[n],val[n];
        vector<pair<int,int >> v;
        for(int i=0; i<n; i++){
           cin>>a>>b;
           v.push_back(make_pair(b,a));
        }

        //sort(v.begin(),v.end());
        //reverse(v.begin(),v.end());
        pair<int,int>ans = knapsack(W,v,n);
        cout<<ans.second<<" "<<ans.first<<'\n';
        cin>>W>>n;
    }
    return 0;
}