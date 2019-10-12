#include<bits/stdc++.h>
using namespace std;

class Geeks
{
    //public:
        string geekname;
        int id;
    public:
        void printname(string st);

        void printid(int id)
        {
            this->id = id;
            cout<<"Geek id is : "<<this->id;
        }
};

void Geeks::printname(string s)
{
    geekname = s;
    cout<<"Geeksname is : "<<geekname;
}

int main()
{
    Geeks obj1;
    //obj1.geekname = "xyz";
    //obj1.id = 5;

    obj1.printname("harsh");
    cout<<'\n';

    obj1.printid(5);
    cout<<endl;

    return 0;
}