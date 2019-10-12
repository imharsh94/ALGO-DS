#include<bits/stdc++.h>
using namespace std;

class Geeks{
    //public:

        string geekname;
    public:
        void printgeek(string s)
        {  
            geekname = s;
            cout<<"Geekname is : "<<geekname;
        }
};

int main()
{
    Geeks obj1;
    //obj1.geekname = "Harsh";
    obj1.printgeek("harsh");
    return 0;
}