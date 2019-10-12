//hackerearth tutorial question
#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v[100001];
int nodes,x,y,level[100000];
bool mark[100000];
memset(mark,false,100000);
cin>>nodes;
for(int i=0; i<nodes-1;i++)
  {
     cin>>x>>y;
     v[x].push_back(y);
     v[y].push_back(x);
  }
  
queue<int> q;
int start=1,c=0;
q.push(start);
level[start]=1;
mark[start] = true;
int i;
cin>>i;
while(!q.empty())
 {
   int p = q.front();
   q.pop();
   for(vector<int>::iterator it = v[p].begin(); it!= v[p].end();++it)
     {
       if(mark[*it] == false)
         {
           level[*it]  = level[p] + 1;
           if(level[*it] == i)
             c++;
           q.push(*it);
           mark[*it] = true;
         }
     }
 }  
 cout<<c<<endl;
return 0;
}
