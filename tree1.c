#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node{
 int val,lh,rh;
 struct node *left,*right;
}node;

node *getnode(int val)
 {
   node *temp =(node*)calloc(1,sizeof(node));
   temp->val = val;
   temp->left=temp->right=NULL;
   return temp;
 }

int max;

int query(node *ptr)
 {
   if(ptr)
   {
    ptr->lh = query(ptr->left);
    ptr->rh =query(ptr->right);
    if(ptr->lh + ptr->rh +1 > max)
     max = ptr->lh + ptr->rh +1 ;
    return (ptr->lh > ptr->rh ? ptr->lh : ptr->rh) + 1; 
   }
   else
    return 0;
    
 }
 
 int main()
 {
  max = INT_MIN;
  node *root = NULL, *ptr;
  int n,x,i;
  scanf("%i %i",&n,&x);
  root = getnode(x);
  char str[12300];
  while(--n)
   {
     scanf("%s",str);
     i=0;
     ptr = root;
     while(str[i] && ptr)
      {
        if(str[i] == 'L')
         {
           if(ptr->left == NULL)
             ptr->left = getnode(0);
           ptr = ptr->left;
             
         }
         else
         {
           if(ptr->right == NULL)
             ptr->right = getnode(0);
           ptr = ptr->right;  
         }
         i++;
      }
      scanf("%i",&x);
      ptr->val = x ;
   }
   query(root);
   printf("%i",max);
   return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
