#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue< int > pq;
    pq.emplace(30);
    pq.emplace(100);
    pq.emplace(25);
    pq.emplace(40);
    cout<<"Popping elements...\n";
    while(!pq.empty())
    {
        cout<<pq.top()<<'\n';
        pq.pop();
    }
    cout<<endl;
    return 0;
}