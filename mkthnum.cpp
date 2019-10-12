#include<bits/stdc++.h>
using namespace std;

struct node
{
    int count;
    node *left,*right;

    node(int count, node *left, node *right):
	count(count), left(left), right(right) {}
    
    node* insert(int l,int r,int w);
};

int main()
{

node *null = new node(0, NULL,NULL);
null->left = null->right = null;

printf("%p\n",null);
printf("%p\n",null->left->right);
cout<<null->count<<" "<<null->left->left->count<<'\n';

}
