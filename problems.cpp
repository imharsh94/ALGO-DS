#include<bits/stdc++.h>
#define f first
#define se second
#define mp make_pair
#define pb push
 
using namespace std;
 
int main()
{
    int p,s,score;
    cin>>p>>s;
    // vector< pair< int,int > > v;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    map< int,int > mm;
   
    int scr[s+1],usr[s+1];
    for(int i=1; i<=p; i++)
    {
	
	score=0;
	for(int j=0; j<s; j++)
	    cin>>scr[j];
	for(int j=0; j<s; j++)
	    cin>>usr[j];
	for(int j=0; j<s; j++)
	    mm[scr[j]] = usr[j];
 
	sort(scr,scr+s);
 
	for(int j=0; j<s-1; j++)
	{
	    if(mm[scr[j]] > mm[scr[j+1]])
		score++;
	    
	}
	
	pq.pb(mp(score,i));
 
	
    }
 
   // sort(v.begin(),v.end());
 
   // for(int i=0; i<p; i++)
//	cout<<v[i].se<<'\n';
    while(!pq.empty())
    {
	cout<<pq.top().se<<'\n';
	pq.pop();
    }
   
    return 0;
   } 
