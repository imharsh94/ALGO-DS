#include<bits/stdc++.h>
using namespace std;

vector< int > ans;
int main()
{
    int n,a,cnt[5]={0}; cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a == 0) 
            cnt[0]=1;
        else if(a == 100)
            cnt[1] = 1;
        else if(a % 10 == 0)
            cnt[2]= a;
        else if(a<10)
            cnt[3]=a;
        else    
            cnt[4] = a;

    }

    
    if(cnt[0]) ans.push_back(0);
    if(cnt[1]) ans.push_back(100);
    if(cnt[2]) ans.push_back(cnt[2]);
    if(cnt[3]) ans.push_back(cnt[3]);
    if(!cnt[2] && !cnt[3] && cnt[4]) ans.push_back(cnt[4]);
    cout<<ans.size()<<'\n';

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;

}