#include<bits/stdc++.h>
using namespace std;

struct node
{
	int key;
	struct node *left,*right;
};

struct node* newnode(int item)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

struct node* insert(struct node* node,int key)
{
	if(node == NULL) return newnode(key);

	if(key < node->key)
		node->left = insert(node->left,key);
	else if(key > node->key)
		node->right = insert(node->right,key);

	return node;
}

int maxdepth(struct node* node)
{
	if(node == NULL)
		return 0;
	int ldepth = maxdepth(node->left);
	int rdepth = maxdepth(node->right);

	if(ldepth > rdepth)
		return(ldepth+1);
	else
		return(rdepth+1);
}

struct node* find(node *ptr, int key)  
   {
      if(ptr)
      {
        if(ptr->key == key)
         return ptr;
        else if(ptr->key > key)
         return find(ptr->left, key);
        else
         return find(ptr->right,key);
      }
      else
       return NULL;
   }


int main()
{
	int n;
	cin>>n;
	int a[n],h[n],tot=0;
	h[n] = {0};

	for (int i = 0; i <n; ++i)
	{
		cin>>a[i];
	}

	struct node *root = NULL,*ptr;
	root = insert(root,a[0]);

	for(int i=1; i<n; i++)
		insert(root,a[i]);

	for (int i = 0; i < n; ++i)
	{
		ptr = find(root,a[i]);
		h[i] = maxdepth(ptr)-1;
	}

	for (int i = 0; i < n; ++i)
	{
		tot += h[i];
	}

 cout<<h[0]<<'\n';
 cout<<tot<<'\n';
	return 0;
}