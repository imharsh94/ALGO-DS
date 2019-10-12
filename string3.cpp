#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "My name is narsh narsh";
   // set< string > s;
   multiset< string > s;
    // s.insert("hello");
    string s1="";
    string s2 = "na";
    string s3 = "harsh";

   // cout<<s3.find("v")<<endl;

    for(int i=0 ; i<str.length() ; i++)
    {
        if(i == str.length()-1){
            s1 += str[i];
            s.insert(s1);
            s1="";
        }
        else if(str[i] != ' '){
            
            s1 += str[i];
        }
        else{
            s.insert(s1);
            s1 = "";
        }
    }
    
    for(auto i : s)
    {
        if(i.find(s2) == 0)
            cout<<i<<" ";
    }
    return 0;
}