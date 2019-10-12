#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct node
  {
     struct node *left;
     int val;
     struct node *right;
  }node;
  
  void insert(node **root, ll val)
    {
        if(*root == NULL)
          {
            *root = (node*)malloc(sizeof(node));
            (*root)->val = val;
          }
          else if((*root)->val > val)
          {
            insert(&(*root)->left, val);

          }
          else
            insert(&(*root)->right,val);           
    }

  node* find(node *ptr, ll key)  
   {
      if(ptr)
      {
        if(ptr->val == key)
         return ptr;
        else if(ptr->val > key)
         return find(ptr->left, key);
        else
         return find(ptr->right,key);
      }
      else
       return NULL;
   }
   
   void ptra(node *ptr)
   {
    if(ptr)
     {
      printf("%lli\n",ptr->val);
      ptra(ptr->left);
      ptra(ptr->right);
     }
   }
  
  int main()
  {
  ll n,x;
  cin>> n;
  node *root = NULL , *ptr;
  for(ll i=0 ; i<n ; i++)
  {
   cin>> x;
   insert(&root,x);
  }
  
  ptr = find(root,x);
   ptra(ptr);
  
   return 0;
  }
  
