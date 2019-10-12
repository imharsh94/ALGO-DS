#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;cin.ignore();
    while(t--)
    {
	int x=0,y=0,z=0,ans=0,i,j,k,c=0;
	string s,str1,str2;
	cin.ignore();
	getline(cin,s);
	int a = s.find('+');
	int b = s.find('=');
	int m = s.find("machula");

	if(m>a)
	    x = stoi(s.substr(0,a-1));
	if(m>b || m<a)
	    y = stoi(s.substr(a+2,b-a-3));
	if(m<b)
	    z = stoi(s.substr(b+2,s.length()-(b+2)));
	
	if(m<a)
	{
	    ans = z-y;
	    str1 = s.substr(0,a-1);
	    str2 = to_string(ans);
	}
	else if(m>a && m<b)
	{
	    ans = z-x;
	    str1 = s.substr(a+2,b-a-3);
	    str2 = to_string(ans);
	}

	else if(m>b)
	{
	    ans = x+y;
	    str1 = s.substr(b+2,s.length()-(b+2));
	    str2 = to_string(ans);
	    
     	}
	

	i=0;j=0;
	while(i<str2.length())
	{
	    if(str1[j] == str2[i])
	    {
		i++; j++;
	    }
	    else
		break;
	}


	
	j = str1.length()-1;
	k = str2.length()-1;
	while(k > 0 )
	{
	    if(str2[k] == str1[j])
	    {
	    j--;
	    k--;
	    c++;
	    }
	    else
		break;
	}


	if(k==-1)
	{
	    str1 = str1.replace(0,7,"");
	}
	else if(i == str2.length())
	{
	    str1 = str1.replace(str2.length(),7,"");
	}

	else
	{
	    str2 = str2.substr(i,str2.length()-i-c);
	    str1 = str1.replace(i,7,str2);
	}

	if(m<a)
	    cout<<str1<<" + "<<y<<" = "<<z<<'\n';
	else if(m>a && m<b)
	    cout<<x<<" + "<<str1<<" = "<<z<<'\n';
	else if(m>b)
	    cout<<x<<" + "<<y<<" = "<<str1<<'\n';
	
//	cout<<a<<" "<<b<<" "<<m<<'\n';
//	cout<<x<<" "<<y<<" "<<z<<'\n';
//	cout<<str1<<'\n';
    }
    return 0;
}
