 #include<bits/stdc++.h>
 using namespace std;
 
  int main()
  {
   bitset<8> foo (string("1011")),s;
   cout<<s<<endl;
   cout<<s.set()<<endl;
   cout<<foo.reset(1)<<endl;
   cout<<foo.flip()<<endl;
   cout<<foo.count()<<endl;
   cout<<foo.reset()<<endl;
   return 0;
  }
