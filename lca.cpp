#include<bits/stdc++.h>
using namespace std;

struct node
 {
   int key;
   struct node *left,*right;
 };
 
node* newnode(int k)
 {
  node *temp = new node;
  temp->key = k;
  temp->left = temp->right = NULL;
  return temp;
 } 
 
bool findpath(node *root,vector< int > &path, int k)
 {
   if(root == NULL) return false;
   
   path.push_back(root->key);
   
   if(root->key == k)
   return true;
   
   if((root->left && findpath(root->left,path,k)) ||
     (root->right && findpath(root->right,path,k)) )
     return true;
     
   path.pop_back();
   return false;  
  }
  
int findlca(node *root, int n1, int n2)
  {
    vector< int > path1,path2;
    
    if(!findpath(root,path1,n1) || !findpath(root,path2,n2))
      return -1;
      
    int i;
    for(i = 0 ; i < path1.size() && path2.size() ; i++)
      if(path1[i] != path2[i])
        break;
     
     return path1[i-1];     
  }


int main()
 {
  node *root;
  root = newnode(1);
  root-> left = newnode(2);
  root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    cout << "LCA(4, 5) = " << findlca(root, 4, 5);
    cout << "nLCA(4, 6) = " << findlca(root, 4, 6);
    cout << "nLCA(3, 4) = " << findlca(root, 3, 4);
    cout << "nLCA(2, 4) = " << findlca(root, 2, 4);
 
  return 0;
 }














   
