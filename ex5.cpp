// vector stl
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector< int > v;
    vector< int >:: iterator it;
    //sit = v.begin();
    for(int i=1; i<=10; i++){
        v.push_back(i);
    }
   
    v.erase(v.begin(), v.begin()+3);
    v.insert(v.begin()+2, 300);
     it = v.begin()+4;
     v.erase(it);

    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}