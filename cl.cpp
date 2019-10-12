#include<bits/stdc++.h>
using namespace std;

class Boy 
{

       int roll;

   
        int id(int d)
        {
            roll = d;
            return roll+10;
        }
};


int main()
{
    Boy b;
    //b.roll = 10;
   // cout<<b.roll<<endl;
    cout<<b.id(10)<<'\n';
}