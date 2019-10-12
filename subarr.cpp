 // codechef subarray
 #include<bits/stdc++.h>
 using namespace std;
 

 
 int main()
  {
    static pair< int,int > f[50];
    f[0] = make_pair(0,0);
    f[1] = make_pair(20,2);
    f[2] = make_pair(30,3);
    f[3] = make_pair(40,4);
    f[4] = make_pair(50,6);
   
    int l = lower_bound(f,f+5,make_pair(-1,INT_MAX)) -f ;
    int k = lower_bound(f,f+5,make_pair(11,INT_MAX)) -f ;
   int j = lower_bound(f,f+5,make_pair(20,INT_MAX)) -f ;
    cout<<l<<endl;
     cout<<k<<endl;
      cout<<j<<endl;
    return 0;
  }
